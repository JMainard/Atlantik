#include "passerelle.h"
#include <QDebug>
Passerelle::Passerelle()
{

}

/**
 * @brief Passerelle::chargerLesEquipements
 * @param unIdBateau : Identifie le bateau
 * @return les equipements du bateau
 * S'apprête a renvoyer un vector
 * Récuperer les equipements en fonction du bateau séléctionné
 */
QVector<Equipement> Passerelle::chargerLesEquipements(QString unIdBateau)
{
    // le new sert de lien pour le constructeur de jeuEnregistrement.
    QVector <Equipement> vectEquipements;
    jeuEnregistrement monEnregistrement("select id,lib from Equipement inner join Posseder on idEquip=id where idBat="+unIdBateau+";");
qDebug() <<"select id,lib from Equipement inner join Posseder on idEquip=id where idBat="+unIdBateau+"";

   // On entre des équipements dans le vector Equipements jusqu'a ce qu'il y en ai plus.

    do{
        QString idEquip= monEnregistrement.getValeur("id").toString();
        QString libEquip= monEnregistrement.getValeur("lib").toString();
        //On creer une nouvelle instance Equipement avec new Equipement
        Equipement infoEquip(idEquip,libEquip);
        vectEquipements.push_back (infoEquip);

        monEnregistrement.suivant();

    }
    while(!monEnregistrement.finReq());
    return(vectEquipements);
}


/**
 * @brief Passerelle::chargerLesBateauxVoyageurs
 * @return un vecteur des infos du bateau
 * S'apprête a renvoyer un vector
 * On récupère toutes les information concernant tout les bateaux voyageurs
 */
QVector<BateauVoyageur> Passerelle::chargerLesBateauxVoyageurs()
{
    QVector <BateauVoyageur> vectInfos;
    jeuEnregistrement enregistrementInfos("select bateauNum,bateauNom,longueur,largeur,vitesse,image,poidsMax from Bateau where type='v'");

    do{
       QString unIdBateau = enregistrementInfos.getValeur("bateauNum").toString();
       QString nomBateau = enregistrementInfos.getValeur("bateauNom").toString();
       float longueur = enregistrementInfos.getValeur("longueur").toFloat();
       float largeur = enregistrementInfos.getValeur("largeur").toFloat();
       float vitesse = enregistrementInfos.getValeur("vitesse").toFloat();
       QString image = enregistrementInfos.getValeur("image").toString();

       chargerLesEquipements(unIdBateau);
       QVector <Equipement> vectStockage;
       vectStockage = chargerLesEquipements(unIdBateau);
      BateauVoyageur batInfo(unIdBateau,nomBateau,longueur,largeur,vitesse,image,vectStockage);
       vectInfos.push_back( batInfo);
    }
    while(!enregistrementInfos.finReq());
    return(vectInfos);
}





