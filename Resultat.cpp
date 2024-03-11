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
    cout<<"les d�tails de cr�ation sont "<<endl;
    creation.afficher();
    cout<<"/n Les d�tails de participant sont "<<endl;
    participant.afficher();
    cout<<"/n La note attribue� est "<<note<<endl;
}
void Resultat::saisir()
{
    cin>>creation;
    cin>>participant;
    cout<<"Attribuez une note � cette cr�ation /n"<<endl;
    cin>>note;
}

istream& operator>>(istream& in ,Resultat& res)
{
    in>>res.creation;
    in>>res.participant;
    cout<<"Attribuez une note � cette cr�ation /n"<<endl;
    in>>res.note;
    return in;
}
ostream& operator<<(ostream& out ,Resultat& res)
{
    out<<res.creation;
    out<<res.participant;
    cout<<"Attribuez une note � cette cr�ation /n"<<endl;
    out<<res.note;
    return out;
}
