#include <iostream>
#include <string>
#include "Création.h"
#include "Participant.h"
#pragma once
using namespace std;

class Resultat
{
    Creation creation;
    Participant participant;
    int note ;
public :
    Resultat();
    Resultat(Creation,Participant,int);
    ~Resultat(void);
    void afficher();
    void saisir();
    friend istream& operator >>(istream&,Resultat&);
    friend ostream& operator << (ostream&,Resultat&);


};
