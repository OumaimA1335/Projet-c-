#include <iostream>
#include <string>
#pragma once
using namespace std ;
class Stand
{
    static int numStand;
    string emplacement;
public :
    Stand();
    Stand(string);
    ~Stand(void);
    void afficher();
    void setEmplacement(string);
    string getEmplacement();
    static void afficherNbStand();
    void saisir();
    friend ostream& operator<<(ostream&,Stand&);
    friend istream& operator>>( istream&,Stand&);


} ;
