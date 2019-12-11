#ifndef PASSERELLE_H
#define PASSERELLE_H
#include <QString>
#include "equipement.h"
#include <QSqlQuery>
#include "jeuenregistrement.h"
#include "bateauvoyageur.h"
#include <QVector>
class Passerelle
{
public:
    Passerelle();
    static QVector <Equipement> chargerLesEquipements(QString unIdBateau);
    static QVector <BateauVoyageur>chargerLesBateauxVoyageurs();
};

#endif // PASSERELLE_H
