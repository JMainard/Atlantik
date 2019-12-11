#include "pdf.h"

PDF::PDF(QString nomDocument)
    : QTextDocument()
{
    nomDoc=nomDocument;

}
/**
 * @brief PDF::ecrireTexte
 * @param leTexte : Correspond à la chaîne avec toutes les infos
 * Je récupère versChaine(chaineARetourner) qui est dans bateauVoyageur.cpp
 */
void PDF::ecrireTexte(QString leTexte)
{
    //
    codeHtml+="<p>" + leTexte + "</p>";

}
/**
 * @brief PDF::chargerImage
 * @param chemin : Chemin d'ou se trouve l'image
 */
void PDF::chargerImage(QString chemin)
{
    codeHtml+="<img src=" + chemin + " />";

}
/**
 * @brief PDF::fermer
 * On enregistre via print en faisant passer l'imprimante en conversion de pdf
 */
void PDF::fermer()
{

    setHtml(codeHtml);
    QPrinter printer (QPrinter::HighResolution);
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(nomDoc);
    printer.setPageSize(QPrinter::A4);

    print(&printer);
}
