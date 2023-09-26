#include "iodata.h"

iodata::iodata() {
    this->mySettings = new QSettings("qSettingsStore.ini", QSettings::IniFormat);
}
//CAMS
void iodata::save_ips(QVector<pCamera*> ips) {
    this->mySettings->beginGroup("CAMS");
        this->mySettings->beginWriteArray("IPS");
            for(int i = 0, h = 0; i < ips.length(); i++) {
                if(ips[i]->type_cam() == ip_) {
                    this->mySettings->setArrayIndex(h);
                    this->mySettings->setValue("IP", dynamic_cast<ipcam*>(ips[i])->get_camera());
                    h++;
                }
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
void iodata::save_ip(ipcam* ip, pCamera* ipDel) {
    this->mySettings->beginGroup("CAMS");
        this->mySettings->beginWriteArray("IPS");
            int id = get_ip_id(ipDel);
            this->mySettings->setArrayIndex(id);
            this->mySettings->setValue("IP", ip->get_camera());
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
QVector<pCamera*> iodata::get_ips() {
    QVector<pCamera*> vaux;
    this->mySettings->beginGroup("CAMS");
        int length = this->mySettings->beginReadArray("IPS");
            for(int i = 0; i < length; i++) {
                this->mySettings->setArrayIndex(i);
                ipcam* ipaux = new ipcam(this->mySettings->value("IP").toString());
                vaux.push_back(ipaux);
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return vaux;
}
ipcam* iodata::get_ip(int id) {
    ipcam* aux;
    this->mySettings->beginGroup("CAMS");
        this->mySettings->beginReadArray("IPS");
            this->mySettings->setArrayIndex(id);
            aux = new ipcam(this->mySettings->value("IP").toString());
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return aux;
}
/*void iodata::remove_ips() {
    this->mySettings->beginGroup("CAMS");
        int length = this->mySettings->beginReadArray("IPS");
            for(int i = 0; i < length; i++) {
                this->mySettings->setArrayIndex(i);
                this->mySettings->remove("IP");
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
void iodata::remove_ip(pCamera* ip) {
    this->mySettings->beginGroup("CAMS");
        this->mySettings->beginReadArray("IPS");
            int id = get_ip_id(ip);
            this->mySettings->setArrayIndex(id);
            this->mySettings->remove("IP");
        this->mySettings->endArray();
    this->mySettings->endGroup();
}*/
int iodata::get_ip_id(pCamera* node) {
    this->mySettings->beginGroup("CAMS");
        int length = this->mySettings->beginReadArray("IPS");
        for(int i = 0; i < length; i++) {
            this->mySettings->setArrayIndex(i);
            if(dynamic_cast<ipcam*>(node)->get_camera() == this->mySettings->value("IP").toString())
                return i;
        }
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return -1;
}
//HSVS
void iodata::save_hsvs(QVector<ocvColor*> myColors) {
    this->mySettings->beginGroup("TRACKING");
        this->mySettings->beginWriteArray("HSVS");
            for(int i = 0; i < myColors.length(); i++) {
                this->mySettings->setArrayIndex(i);
                this->mySettings->setValue("name",  myColors[i]->get_name());
                this->mySettings->setValue("color", myColors[i]->get_rgb());
                this->mySettings->setValue("hlow",  myColors[i]->get_HSV(lower_)[0]);
                this->mySettings->setValue("slow",  myColors[i]->get_HSV(lower_)[1]);
                this->mySettings->setValue("vlow",  myColors[i]->get_HSV(lower_)[2]);
                this->mySettings->setValue("hup",   myColors[i]->get_HSV(upper_)[0]);
                this->mySettings->setValue("sup",   myColors[i]->get_HSV(upper_)[1]);
                this->mySettings->setValue("vup",   myColors[i]->get_HSV(upper_)[2]);
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
void iodata::save_hsv(ocvColor* myColor, int id) {
    this->mySettings->beginGroup("TRACKING");;
        this->mySettings->beginWriteArray("HSVS");
            this->mySettings->setArrayIndex(id);
            this->mySettings->setValue("name",  myColor->get_name());
            this->mySettings->setValue("color", myColor->get_rgb());
            this->mySettings->setValue("hlow",  myColor->get_HSV(lower_)[0]);
            this->mySettings->setValue("slow",  myColor->get_HSV(lower_)[1]);
            this->mySettings->setValue("vlow",  myColor->get_HSV(lower_)[2]);
            this->mySettings->setValue("hup",   myColor->get_HSV(upper_)[0]);
            this->mySettings->setValue("sup",   myColor->get_HSV(upper_)[1]);
            this->mySettings->setValue("vup",   myColor->get_HSV(upper_)[2]);
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
QVector<ocvColor*> iodata::get_HSVcolors() {
    QVector<ocvColor*> aux;
    this->mySettings->beginGroup("TRACKING");
        int length = this->mySettings->beginReadArray("HSVS");
            for(int i = 0; i < length; i++) {
                this->mySettings->setArrayIndex(i);
                QString   aName = this->mySettings->value("name").toString();
                QColor    aRGB  = this->mySettings->value("color").value<QColor>();
                Scalar    alower(this->mySettings->value("hlow").toInt(), this->mySettings->value("slow").toInt(), this->mySettings->value("vlow").toInt());
                Scalar    aupper(this->mySettings->value("hup").toInt(), this->mySettings->value("sup").toInt(), this->mySettings->value("vup").toInt());
                ocvColor* node  = new ocvColor(aName, aRGB, alower, aupper);
                aux.push_back(node);
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return aux;
}
ocvColor* iodata::get_HSVcolor(int id) {
    ocvColor* aux;
    this->mySettings->beginGroup("TRACKING");
        this->mySettings->beginReadArray("HSVS");
            this->mySettings->setArrayIndex(id);
            QString aName = this->mySettings->value("name").toString();
            QColor  aRGB  = this->mySettings->value("color").value<QColor>();
            Scalar  alower(this->mySettings->value("hlow").toInt(), this->mySettings->value("slow").toInt(), this->mySettings->value("vlow").toInt());
            Scalar  aupper(this->mySettings->value("hup").toInt(), this->mySettings->value("sup").toInt(), this->mySettings->value("vup").toInt());
            aux = new ocvColor(aName, aRGB, alower, aupper);
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return aux;
}
/*void iodata::remove_colors() {
    this->mySettings->beginGroup("TRACKING");
        int length = this->mySettings->beginReadArray("HSVS");
            for(int i = 0; i < length; i++) {
                this->mySettings->setArrayIndex(i);
                this->mySettings->remove("name");
                this->mySettings->remove("color");
                this->mySettings->remove("hlow");
                this->mySettings->remove("slow");
                this->mySettings->remove("vlow");
                this->mySettings->remove("hup");
                this->mySettings->remove("sup");
                this->mySettings->remove("vup");
            }
        this->mySettings->endArray();
    this->mySettings->endGroup();
}
void iodata::remove_color(ocvColor* remColor) {
    this->mySettings->beginGroup("TRACKING");
        this->mySettings->beginReadArray("HSVS");
            int id = get_color_id(remColor);
            this->mySettings->setArrayIndex(id);
            this->mySettings->remove("name");
            this->mySettings->remove("color");
            this->mySettings->remove("hlow");
            this->mySettings->remove("slow");
            this->mySettings->remove("vlow");
            this->mySettings->remove("hup");
            this->mySettings->remove("sup");
            this->mySettings->remove("vup");
        this->mySettings->endArray();
    this->mySettings->endGroup();
}*/
int iodata::get_color_id(ocvColor* node) {
    this->mySettings->beginGroup("TRACKING");
        int length = this->mySettings->beginReadArray("HSVS");
        for(int i = 0; i < length; i++) {
            this->mySettings->setArrayIndex(i);
            if(node->get_name() == this->mySettings->value("name").toString())
                return i;
        }
        this->mySettings->endArray();
    this->mySettings->endGroup();
    return -1;
}
