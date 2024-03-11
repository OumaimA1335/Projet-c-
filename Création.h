#include <iostream>
#include <string>
#include "Artisant.h"
#include "Participant.h"
using namespace std ;
class Creation
{
    string nom;
    string photo;
    string dimensions;
    string description;
    Artisant artisant;

public :
    Creation();
    Creation(string,string,string,string);
    ~Creation(void);
    void afficher();
    void saisirCreation();
    friend ostream& operator<<(ostream&,Creation&);
    friend istream& operator>>(istream&,Creation&);

};

