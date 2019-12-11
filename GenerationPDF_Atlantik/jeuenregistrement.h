#ifndef JEUENREGISTREMENT_H
#define JEUENREGISTREMENT_H
#include <QString>
#include <QVariant>
#include <QSqlQuery>

class jeuEnregistrement : public QSqlQuery
{
private :
    bool fin;
public:
    jeuEnregistrement(QString chaineSQL);
    void suivant();
    bool finReq();
    QVariant getValeur(QString nomChamp);
    void fermer();
};

#endif // JEUENREGISTREMENT_H
