#include "studentedit.h"
#include "ui_studentedit.h"
#include "mainwindow.h"
#include "QFileDialog"

StudentEdit::StudentEdit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::StudentEdit)

{
    ui->setupUi(this);

}

StudentEdit::~StudentEdit()
{
    delete ui;
}

void StudentEdit::on_pushButton_2_clicked()
{
    hide();
}

bool StudentEdit::checkEmail(){
    QString email = ui->text_email->text();

    QRegExp mailREX("\\b[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,4}\\b");
    mailREX.setCaseSensitivity(Qt::CaseInsensitive);
    mailREX.setPatternSyntax(QRegExp::RegExp);
    return mailREX.exactMatch(email);
}

bool StudentEdit::checkEmpty(){
    QString name = ui->text_name->text();
    QString lastName = ui->text_lastName->text();
    QString usrClass = ui->text_class->text();
    QString classroom = ui->text_classroom->text();
    QString birth = ui->text_birth->text();
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

void StudentEdit::on_pushButton_clicked()
{
    //1.
    QStringList ls;
    ls.append(ui->text_name->text());
    ls.append(ui->text_lastName->text());
    ls.append(ui->text_class->text());
    ls.append(ui->text_classroom->text());
    ls.append(ui->text_birth->text());
    ls.append(ui->text_street->text());
    ls.append(ui->text_houseNum->text());
    ls.append(ui->text_zip->text());
    ls.append(ui->text_phone->text());
    ls.append(ui->text_email->text());
    const QPixmap* _image = ui->label_profileImage->pixmap();
    QImage image(_image->toImage());
    QByteArray send_imageInBytes;
    QBuffer dodatak(&send_imageInBytes);
    dodatak.open(QIODevice::WriteOnly);
    image.save(&dodatak, "PNG");
    ls.append(send_imageInBytes);
    emit sendEditData(ls);

    close();

    QString new_name = ui->text_name->text();
    QString new_lastName = ui->text_lastName->text();
    QString new_usrClass = ui->text_class->text();
    QString new_classroom = ui->text_classroom->text();
    QString new_birth = ui->text_birth->text();
    QString new_street = ui->text_street->text();
    QString new_houseNum = ui->text_houseNum->text();
    QString new_zip = ui->text_zip->text();
    QString new_phone = ui->text_phone->text();
    QString new_email = ui->text_email->text();
    QString new_fullName = new_name + " " + new_lastName;

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
    else if(ui->label_profileImage->pixmap()==0){
        QPalette sample_palette;
        sample_palette.setColor(QPalette::WindowText, Qt::red);
        ui->email->setPalette(sample_palette);
        ui->email->setText("Load student image.");
    }
    else{
        //adding to db
        MainWindow conn;
        conn.connOpen();
        QSqlQuery query;
        query.prepare("UPDATE students SET name=:new_name, surname=:new_surname, class=:new_class, classroom=:new_classroom, birthDate=:new_birthDate, adressStreet=:new_adressStreet, adressHouseNum=:new_adressHouseNum, adressZip=:new_adressZip, phone=:new_phone, email=:new_email, picture=:new_picture, fullName=:new_fullName WHERE email=:email");
        query.bindValue(":new_name", new_name);
        query.bindValue(":new_surname", new_lastName);
        query.bindValue(":new_class", new_usrClass);
        query.bindValue(":new_classroom", new_classroom);
        query.bindValue(":new_birthDate", new_birth);
        query.bindValue(":new_adressStreet", new_street);
        query.bindValue(":new_adressHouseNum", new_houseNum);
        query.bindValue(":new_adressZip", new_zip);
        query.bindValue(":new_phone", new_phone);
        query.bindValue(":new_email", new_email);
        query.bindValue(":new_fullName", new_fullName);
        const QPixmap* _image = ui->label_profileImage->pixmap();
        QImage image(_image->toImage());
        QByteArray new_imageInBytes;
        QBuffer dodatak(&new_imageInBytes);
        dodatak.open(QIODevice::WriteOnly);
        image.save(&dodatak, "PNG");
        query.bindValue(":new_picture",new_imageInBytes);
        query.bindValue(":email",old_email);

        if(query.exec()){
            QMessageBox::information(this, "Info", "Student information successsfully edited!");
            hide();
            conn.connClose();
        }
        else{
            QMessageBox::information(this, "Warning", "Something went wrong.");
        }
    }
}

void StudentEdit::receiveData(QStringList ls){
    ui->text_name->setText(ls[0]);
    ui->text_lastName->setText(ls[1]);
    ui->text_class->setText(ls[2]);
    ui->text_classroom->setText(ls[3]);
    ui->text_birth->setText(ls[4]);
    ui->text_street->setText(ls[5]);
    ui->text_houseNum->setText(ls[6]);
    ui->text_zip->setText(ls[7]);
    ui->text_phone->setText(ls[8]);
    ui->text_email->setText(ls[9]);
    QString name = ui->text_name->text();
    QString lastName = ui->text_lastName->text();
    QString street = ui->text_street->text();
    QString houseNum = ui->text_houseNum->text();
    old_email = ui->text_email->text();
    MainWindow conn;
    conn.connOpen();
    QSqlQuery query;
    query.prepare("SELECT * FROM students WHERE name=:name and surname=:lastName and adressStreet=:adressStreet and adressHouseNum=:adressHouseNum");
    query.bindValue(":name",name);
    query.bindValue(":lastName",lastName);
    query.bindValue(":adressStreet",street);
    query.bindValue(":adressHouseNum",houseNum);
    if(query.exec()){
        while(query.next()){
            QByteArray outByteArray = query.value(10).toByteArray();
            QPixmap image = QPixmap();
            image.loadFromData(outByteArray);
            image = image.scaledToWidth(ui->label_profileImage->width(), Qt::SmoothTransformation);
            ui->label_profileImage->setPixmap(image);
        }
        conn.connClose();
    }
    else{
        QMessageBox::warning(this, "Error", "Something went wrong while loading an image.");
    }
}

void StudentEdit::on_pushButton_3_clicked()
{
    QString file = QFileDialog::getOpenFileName(this, "Browse", "", "images(*.png *.jpg *.jpeg *.bmp *.gif)");

    if(QString::compare(file, QString())!=0){
        QImage image;
        bool valid = image.load(file);

        if(valid){
            image = image.scaledToWidth(ui->label_profileImage->width(), Qt::SmoothTransformation);
            ui->label_profileImage->setPixmap(QPixmap::fromImage(image));
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::black);
            ui->image_info->setPalette(sample_palette);
            ui->image_info->setText("Image loaded succsessfully.");
        }
        else{
            QPalette sample_palette;
            sample_palette.setColor(QPalette::WindowText, Qt::red);
            ui->image_info->setPalette(sample_palette);
            ui->image_info->setText("Image failed to load.");
        }
    }
}
