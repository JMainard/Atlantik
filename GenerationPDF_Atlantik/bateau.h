#ifndef BATEAU_H
#define BATEAU_H
#include <QString>
class Bateau
{
    private:
        QString idBat;
        QString nomBat;
        float longueurBat;
        float largeurBat;
    public:
        Bateau();
        Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur);
        QString versChaine();
};

#endif // BATEAU_H
