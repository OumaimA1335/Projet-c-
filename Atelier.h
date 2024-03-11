#include "Evenement.h"
#include "Artisant.h"
#include "Création.h"
#include <iostream>
#pragma once
#include <string>
#include<vector>

class Atelier : public Evenemnet
{
    Artisant Artisant;
    vector <Creation*> TabCreation;
public :
    Atelier();
    Atelier(Artisant&);
    Atelier(const Atelier&);
    ~Atelier(void);
    void afficher();
    void ajouterCreation();
    void sasirCreation();
    friend istream& operator >>(istream&,Evenemnet&);
    friend ostream operator<<(ostream&,Evenement&);


} ;
