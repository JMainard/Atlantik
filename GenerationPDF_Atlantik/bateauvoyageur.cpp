#include "bateauvoyageur.h"
/**
 * Class Héritante de Bateau
 */
BateauVoyageur::BateauVoyageur()
    : Bateau()
{

}
/**
 * @brief BateauVoyageur::BateauVoyageur
 * @param unId: Id du bateau
 * @param unNom : Nom du bateau
 * @param uneLongueur : Longueur du bateau
 * @param uneLargeur : Largeur du bateau
 * @param vitesse : vitesse du bateau
 * @param uneImage : image du bateau
 * @param unVectEquip : Vecteur indiquant les équipements du bateau
 *  Constructeur afin d'organiser le pdf
 */
BateauVoyageur::BateauVoyageur(QString unId, QString unNom, float uneLongueur, float uneLargeur, float vitesse, QString uneImage, QVector<Equipement> unVectEquip)
    :Bateau  (unId,unNom,uneLongueur,uneLargeur)
{
    vitesseBatVoy = vitesse;
    imageBatVoy = uneImage;
    vectLesEquipements = unVectEquip;
}
/**
 * @brief BateauVoyageur::versChaine
 * @return chaine organisant les informations du bateau
 * Fonction retournant les informations des bateau et organisé.
 */
QString BateauVoyageur::versChaine()
{
    QString chaineARetourner = Bateau::versChaine() + "\nVitesse : " + vitesseBatVoy + "\nListe des équipements du bateau : ";
    for(int i=0 ; i < vectLesEquipements.length() ; i++) {
        QString unEquipement = vectLesEquipements[i].versChaine();
        chaineARetourner += "\n- " + unEquipement;
    }
    return(chaineARetourner);
}
/**
 * @brief BateauVoyageur::getImageBatVoy
 * @return Image du bateau
 * Retourne l'image du bateau
 */
QString BateauVoyageur::getImageBatVoy()
{
    return(imageBatVoy);
}
