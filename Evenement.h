#include <iostream>
#include <string>
#include "Participant.h"
#include <vector>
#pragma once
using namespace std;

class Evenemnet
{
protected:

    string nom;
    string emplacement;
    int date ;
    vector <Participant*> tabParticipant;
public :
    Evenemnet();
    Evenemnet(string,string,int);
    Evenemnet(const Evenemnet&);
    ~Evenemnet(void);
    void afficher();
    void ajouterParticipant();
    void supprimerParticipant(int);
    void saisirEvenement();
    friend istream& operator >>(istream&,Evenemnet&);
    friend ostream& operator<<(ostream&,Evenemnet&);
    Evenemnet&  operator=(const Evenemnet&);

};
