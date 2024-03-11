#include "Stand.h"
using namespace std ;
int Stand::numStand=0;
Stand::Stand()
{
    emplacement="";
    numStand++;
}
Stand::Stand(string emp)
{
    this->emplacement=emp;
}
Stand::~Stand()
{
    cout<<"Appelle du destructeur"<<endl;
}
void Stand::saisir()
{
    cout<<"Donnez l'emplacement "<<endl;
    cin>>emplacement;
}
void Stand::afficher()
{
    cout<<"le numéro de stand est "<<numStand<<endl;
    cout<<"L'emplacement de stand est " <<emplacement<<endl;
}
void Stand::afficherNbStand()
{
    cout <<"Le nombre des stand est "<<numStand<<endl;
}
void Stand::setEmplacement(string emp)
{
    emplacement=emp;
}
string Stand::getEmplacement()
{
    return emplacement;
}
ostream& operator<<(ostream& out , Stand & stand)
{

    out<<"L'emplacement de stand" <<stand.emplacement<<endl;
    out<<"Le nombre des stands est "<<stand.numStand;
    return out;
}
istream& operator >> (istream& in,Stand& stand)
{
    cout<<"Donnez l'emplacement "<<endl;
    in>>stand.emplacement;
    return in ;
}
