#ifndef BATEAUVOYAGEUR_H
#define BATEAUVOYAGEUR_H
#include <QString>
#include <QVector>
#include "bateau.h"
#include "equipement.h"
#include "pdf.h"

class BateauVoyageur : public Bateau
{
    private:
        float vitesseBatVoy;
        QString imageBatVoy;
        QVector <Equipement> vectLesEquipements;

    public:
        BateauVoyageur();
        BateauVoyageur(QString unId,QString unNom, float uneLongueur, float uneLargeur, float vitesse, QString uneImage, QVector <Equipement> unVectEquip);
        QString versChaine();
        QString getImageBatVoy();

};

#endif // BATEAUVOYAGEUR_H
