#include "bateau.h"

Bateau::Bateau()
{

}

Bateau::Bateau(QString unId, QString unNom, float uneLongueur, float uneLargeur)
{
    idBat = unId;
    nomBat = unNom;
    longueurBat = uneLongueur;
    largeurBat = uneLargeur;
}
/**
 * @brief Bateau::versChaine
 * @return chaine avec infos principal des bateaux.
 * Retourne sous la forme d'une chaîne de caractères toutes les valeurs des attributs de la classe et de leur libellés
 */
QString Bateau::versChaine()
{
    return("Identifiant : " + idBat + "\nNom du bateau : " + nomBat + "\nLongueur : " + longueurBat + "\nLargeur : " + largeurBat);
}

