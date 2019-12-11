#include "equipement.h"

Equipement::Equipement()
{

}

Equipement::Equipement(QString unId, QString unLib)
{
 idEquip = unId;
 libEquip = unLib;
}
/**
 * @brief Equipement::versChaine
 * @return le libellé de l'équipement du bateau
 * L'identitfiant n'est pas inséré dans la chaîne
 * Retourne sous la forme d'une chaine de valeur de l'attribut libEquip de la classe
 */
QString Equipement::versChaine()
{
    return (libEquip);
}
