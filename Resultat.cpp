#include "Resultat.h"
using namespace std ;
Resultat::Resultat()
{
    note=0;
}
Resultat::Resultat(Creation Creation,Participant participant,int note)
{
    this->creation=creation;
    this->participant=participant;
    this->note=note;
}
Resultat::~Resultat()
{
    cout<<"Appel de destructeur /n"<<endl;
}
void Resultat::afficher()
{
    cout<<"les détails de création sont "<<endl;
    creation.afficher();
    cout<<"/n Les détails de participant sont "<<endl;
    participant.afficher();
    cout<<"/n La note attribueé est "<<note<<endl;
}
void Resultat::saisir()
{
    cin>>creation;
    cin>>participant;
    cout<<"Attribuez une note à cette création /n"<<endl;
    cin>>note;
}

istream& operator>>(istream& in ,Resultat& res)
{
    in>>res.creation;
    in>>res.participant;
    cout<<"Attribuez une note à cette création /n"<<endl;
    in>>res.note;
    return in;
}
ostream& operator<<(ostream& out ,Resultat& res)
{
    out<<res.creation;
    out<<res.participant;
    cout<<"Attribuez une note à cette création /n"<<endl;
    out<<res.note;
    return out;
}
