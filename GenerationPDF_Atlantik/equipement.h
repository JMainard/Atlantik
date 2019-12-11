#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>


class Equipement
{
public:
    Equipement();
    Equipement(QString unId,QString unLib);
    QString versChaine();

private :
    QString idEquip;
    QString libEquip;
};

#endif // EQUIPEMENT_H
