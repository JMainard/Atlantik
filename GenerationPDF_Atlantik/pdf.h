#ifndef PDF_H
#define PDF_H
#include <QString>
#include "bateauvoyageur.h"
#include <QTextDocument>
#include <QPrinter>


class PDF : public QTextDocument
{
private:
    QString nomDoc;
    QString codeHtml;
    public:
        PDF(QString nomDocument);
        void ecrireTexte(QString leTexte);
        void chargerImage(QString chemin);
        void fermer();
};

#endif // PDF_H
