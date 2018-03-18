#include "addstudent.h"
#include "ui_addstudent.h"
#include "mainwindow.h"

AddStudent::AddStudent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddStudent)
{
    ui->setupUi(this);
}

AddStudent::~AddStudent()
{
    MainWindow conn;
    delete ui;
    conn.connClose();
}

void AddStudent::on_pushButton_2_clicked()
{
    hide();
    MainWindow conn;
    conn.connClose();
}

bool AddStudent::checkEmail(){
    QString email = ui->text_email->text();

    QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    mailREX.setCaseSensitivity(Qt::CaseInsensitive);
    mailREX.setPatternSyntax(QRegExp::RegExp);
    return mailREX.exactMatch(email);
}

bool AddStudent::checkEmpty(){
    QString name = ui->text_name->text();
    QString lastName = ui->text_lastName->text();
    QString usrClass = ui->text_class->text();
    QString classroom = ui->text_classroom->text();
    QString birth = ui->dateEdit->text();
    QString street = ui->text_street->text();
    QString houseNum = ui->text_houseNum->text();
    QString zip = ui->text_zip->text();
    QString phone = ui->text_phone->text();
    QString email = ui->text_email->text();
    if(name!="", lastName!="", usrClass!="", classroom!="", birth!="", street!="", houseNum!="", zip!="", phone!="", email!=""){
        return true;
    }
    else{
        return false;
    }
}

void AddStudent::on_pushButton_clicked()
{
    QString name = ui->text_name->text();
    QString lastName = ui->text_lastName->text();
    QString usrClass = ui->text_class->text();
    QString classroom = ui->text_classroom->text();
    QDate date = ui->dateEdit->date();
    QString birth = date.toString();
    QString street = ui->text_street->text();
    QString houseNum = ui->text_houseNum->text();
    QString zip = ui->text_zip->text();
    QString phone = ui->text_phone->text();
    QString email = ui->text_email->text();
    QString fullName = name + " " + lastName;

    if(!checkEmpty()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->email->setPalette(sample_palette);
        ui->email->setText("All fields must be filled.");
    }
    else if(!checkEmail()){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->email->setPalette(sample_palette);
        ui->email->setText("Email not valid.");
    }
    else{
        MainWindow conn;
        conn.connOpen();
        QSqlQuery query;
        query.prepare("INSERT INTO students (name,surname,class,classroom,birthDate,adressStreet,adressHouseNum,adressZip,phone,email,picture,fullName) values (:name,:surname,:class,:classroom,:birthDate,:adressStreet,:adressHouseNum,:adressZip,:phone,:email,:picture,:fullName)");
        query.bindValue(":name", name);
        query.bindValue(":surname", lastName);
        query.bindValue(":class", usrClass);
        query.bindValue(":classroom", classroom);
        query.bindValue(":birthDate", birth);
        query.bindValue(":adressStreet", street);
        query.bindValue(":adressHouseNum", houseNum);
        query.bindValue(":adressZip", zip);
        query.bindValue(":phone", phone);
        query.bindValue(":email", email);
        query.bindValue(":fullName", fullName);

        /*  priprema da se uploaduje u database   */
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->email->setPalette(sample_palette);
        const QPixmap* _image = ui->label_profileImage->pixmap();
        if (!_image){
            ui->email->setText("Student image needs to be loaded.");
        }
        QImage image(_image->toImage());
        QByteArray imageInBytes;
        QBuffer dodatak(&imageInBytes);
        dodatak.open(QIODevice::WriteOnly);
        image.save(&dodatak, "PNG");
        query.bindValue(":picture",imageInBytes);

        if(query.exec()){
            QMessageBox::information(this, "Info", "Student successfuly added!");
            hide();
            conn.connClose();
        }
        else{
            QMessageBox::information(this, "warning", "Something went wrong.");
        }
    }
}

void AddStudent::on_pushButton_3_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Browse", "", "images(*.png *.jpg *.jpeg *.bmp *.gif)");

    if(QString::compare(file, QString())!=0){
        QImage image;
        bool valid = image.load(file);

        if(valid){
            image = image.scaledToWidth(ui->label_profileImage->width(), Qt::SmoothTransformation);
            ui->label_profileImage->setPixmap(QPixmap::fromImage(image));
            ui->load_image->setText("Image loaded succsessfully.");
        }
        else{
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->load_image->setPalette(sample_palette);
            ui->load_image->setText("Image failed to load.");
        }
    }
}
