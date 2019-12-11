/**
  * @author Mainard Jérémy
  * @date 2019-11-27
  */
#include <QCoreApplication>
#include <QSqlDatabase>
#include "passerelle.h"
#include "bateau.h"
#include "bateauvoyageur.h"
#include "jeuenregistrement.h"
#include "pdf.h"
#include "equipement.h"
/**
 * @brief brochurePdf
 * Créer le PDF à partir des infos des bateaux
 */
void brochurePdf() {
QVector<BateauVoyageur> vectBatInfos = Passerelle::chargerLesBateauxVoyageurs();

 //Créer la chaîne à partir du constructeur qui recupère les infos du vectBatInfos
    PDF* monPdf = new PDF("test");
    for(int i;i<vectBatInfos.size();i++){
        QString chaine =vectBatInfos[i].versChaine();
        QString image =vectBatInfos[i].getImageBatVoy();
        monPdf->ecrireTexte(chaine);
        monPdf->chargerImage(image);
      }
    monPdf->fermer();
 }

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QSqlDatabase maBase = QSqlDatabase::addDatabase("QMYSQL");
    maBase.setHostName("localhost");
    maBase.setDatabaseName("Atlantik");
    maBase.setUserName("jeremy");
    maBase.setPassword("elini01");
    bool bddOk = maBase.open();
    if (bddOk)
    {
        brochurePdf();
        return a.exec();
    }
    else{
        return 1 ;
    }

}


