#include <iostream>
#include <string>
#include "Personne.h"
#include "Stand.h"
#pragma once
using namespace std;

class Artisant : public Personne
{
    string specialite ;
    Stand stand;
public :
    Artisant();
    Artisant(string,string,string,string);
    ~Artisant(void);
    void afficher();
    void saisirPersonne();
    friend ostream& operator<<(ostream&,Artisant&);
    friend istream& operator>> (istream&,Artisant&);



};
