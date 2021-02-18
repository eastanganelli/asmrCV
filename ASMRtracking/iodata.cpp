#include "iodata.h"

iodata::iodata() {

}
//CAMS
void iodata::save_ips(QVector<QString> ips) {
    this->mySettings.beginGroup("CAMS");
        this->mySettings.beginWriteArray("IPS");
            for(int i = 0; i < ips.length(); i++) {
                this->mySettings.setArrayIndex(i);
                this->mySettings.setValue("IP", ips[i]);
            }
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
void iodata::save_ip(QString ip, int id) {
    this->mySettings.beginGroup("CAMS");
        this->mySettings.beginWriteArray("IPS");
            this->mySettings.setArrayIndex(id);
            this->mySettings.setValue("IP", ip);
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
QVector<QString> iodata::get_ips() {
    QVector<QString> aux;
    this->mySettings.beginGroup("CAMS");
        int length = this->mySettings.beginReadArray("IPS");
            for(int i = 0; i < length; i++) {
                this->mySettings.setArrayIndex(i);
                aux.push_back(this->mySettings.value("IP").toString());
            }
        this->mySettings.endArray();
    this->mySettings.endGroup();
    return aux;
}
QString iodata::get_ip(int id) {
    QString aux;
    this->mySettings.beginGroup("CAMS");
        this->mySettings.beginReadArray("IPS");
            this->mySettings.setArrayIndex(id);
            aux.push_back(this->mySettings.value("IP").toString());
        this->mySettings.endArray();
    this->mySettings.endGroup();
    return aux;
}
void iodata::remove_ips() {
    this->mySettings.beginGroup("CAMS");
        int length = this->mySettings.beginReadArray("IPS");
            for(int i = length; i >= 0; i--) {
                this->mySettings.setArrayIndex(i);
                this->mySettings.remove("IP");
            }
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
void iodata::remove_ip(int id) {
    this->mySettings.beginGroup("CAMS");
        this->mySettings.beginReadArray("IPS");
            this->mySettings.setArrayIndex(id);
            this->mySettings.remove("IP");
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
//HSVS
void iodata::save_hsvs(QVector<sHSVcolor> hsvcolors) {
    this->mySettings.beginGroup("TRACKING");
        this->mySettings.beginWriteArray("HSVS");
            for(int i = 0; i < hsvcolors.length(); i++) {
                this->mySettings.setArrayIndex(i);
                this->mySettings.setValue("name",  hsvcolors[i].name);
                this->mySettings.setValue("color", hsvcolors[i].color);
                this->mySettings.setValue("hlow",  hsvcolors[i].hsvLOWER[0]);
                this->mySettings.setValue("slow",  hsvcolors[i].hsvLOWER[1]);
                this->mySettings.setValue("vlow",  hsvcolors[i].hsvLOWER[2]);
                this->mySettings.setValue("hup",   hsvcolors[i].hsvUPPER[0]);
                this->mySettings.setValue("sup",   hsvcolors[i].hsvUPPER[1]);
                this->mySettings.setValue("vup",   hsvcolors[i].hsvUPPER[2]);
            }
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
void iodata::save_hsv(sHSVcolor hsvcolor, int id) {
    this->mySettings.beginGroup("TRACKING");;
        this->mySettings.beginWriteArray("HSVS");
            this->mySettings.setArrayIndex(id);
            this->mySettings.setValue("name",  hsvcolor.name);
            this->mySettings.setValue("color", hsvcolor.color);
            this->mySettings.setValue("hlow",  hsvcolor.hsvLOWER[0]);
            this->mySettings.setValue("slow",  hsvcolor.hsvLOWER[1]);
            this->mySettings.setValue("vlow",  hsvcolor.hsvLOWER[2]);
            this->mySettings.setValue("hup",   hsvcolor.hsvUPPER[0]);
            this->mySettings.setValue("sup",   hsvcolor.hsvUPPER[1]);
            this->mySettings.setValue("vup",   hsvcolor.hsvUPPER[2]);
        this->mySettings.endArray();
    this->mySettings.endGroup();
}
QVector<sHSVcolor> iodata::get_HSVcolors() {
    QVector<sHSVcolor> aux;
    this->mySettings.beginGroup("TRACKING");
        int length = this->mySettings.beginReadArray("HSVS");
            for(int i = 0; i < length; i++) {
                this->mySettings.setArrayIndex(i);
                sHSVcolor node;
                node.name  = this->mySettings.value("name").toString();
                node.color = this->mySettings.value("color").value<QColor>();
                node.hsvLOWER[0] = this->mySettings.value("hlow").toInt();
                node.hsvLOWER[1] = this->mySettings.value("slow").toInt();
                node.hsvLOWER[2] = this->mySettings.value("vlow").toInt();
                node.hsvUPPER[0] = this->mySettings.value("hup").toInt();
                node.hsvUPPER[1] = this->mySettings.value("sup").toInt();
                node.hsvUPPER[2] = this->mySettings.value("vup").toInt();
                aux.push_back(node);
            }
        this->mySettings.endArray();
    this->mySettings.endGroup();
    return aux;
}
sHSVcolor iodata::get_HSVcolor(int id) {
    sHSVcolor aux;
    this->mySettings.beginGroup("TRACKING");
        this->mySettings.beginReadArray("HSVS");
            this->mySettings.setArrayIndex(id);
            aux.name  = this->mySettings.value("name").toString();
            aux.color = this->mySettings.value("color").value<QColor>();
            aux.hsvLOWER[0] = this->mySettings.value("hlow").toInt();
            aux.hsvLOWER[1] = this->mySettings.value("slow").toInt();
            aux.hsvLOWER[2] = this->mySettings.value("vlow").toInt();
            aux.hsvUPPER[0] = this->mySettings.value("hup").toInt();
            aux.hsvUPPER[1] = this->mySettings.value("sup").toInt();
            aux.hsvUPPER[2] = this->mySettings.value("vup").toInt();
        this->mySettings.endArray();
    this->mySettings.endGroup();
    return aux;
}
