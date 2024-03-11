#include "Evenement.h"
using namespace std ;

Evenemnet::Evenemnet()
{
    nom="";
    emplacement="";
    date=0;
}
Evenemnet::Evenemnet(string nom, string emplacement ,int date)
{
    string resp="";
    this->nom=nom;
    this->emplacement=emplacement;
    this->date=date;
    Participant *p = new Participant();
    do
    {
          p->saisirPersonne();
          tabParticipant.push_back(p);
          cout<<"voulez vous continuer ?/n"<<endl;
          cin>>resp;
    }while(resp=="oui");
}
Evenemnet::Evenemnet(const Evenemnet& evnet)
{
    nom =evnet.nom;
    emplacement =evnet.emplacement;
    date =evnet.date;
     for(int i =0;i<evnet.tabParticipant.size();i++)
     {
         tabParticipant.push_back(evnet.tabParticipant[i]);
     }
}
Evenemnet::~Evenemnet()
{
    for(int i =0;i<tabParticipant.size();i++)
     {
         delete tabParticipant[i];
     }
     tabParticipant.clear();
}
void Evenemnet::afficher()
{
    cout<<"le nom de l'évenement est "<<nom<<"/n"<<endl;
    cout<<"l'emplacement de l'evenement est "<<emplacement<<"/n"<<endl;
    cout<<" la date de l'evenement est "<<date<<endl;
    cout<<"les personnes assitées sont : /n"<<endl;
    for(int i =0;i<tabParticipant.size();i++)
     {
        tabParticipant[i]->afficher();
     }

}
void Evenemnet::saisirEvenement()
{
    string resp ="";
    cout<<"Donnez le nom de l'évenement /n"<<endl;
    cin>>nom;
    cout<<"Donnez l'emplacement de l'evenement"<<endl;
    cin>>emplacement;
    cout<<"Donnez la date de l'evenement "<<endl;
    cin>>date;
    cout<<"Ajoutez les participants qui assisteront ce évenement"<<endl;
    Participant *p = new Participant();
    do
    {
          p->saisirPersonne();
          tabParticipant.push_back(p);
          cout<<"voulez vous continuer ?/n"<<endl;
          cin>>resp;
    }while(resp=="oui");

}
void Evenemnet::ajouterParticipant()
{
    string resp="";
    Participant *p = new Participant();
    do
    {
          p->saisirPersonne();
          tabParticipant.push_back(p);
          cout<<"voulez vous continuer ?/n"<<endl;
          cin>>resp;
    }while(resp=="oui");
}
void Evenemnet::supprimerParticipant(int indice)
{
    tabParticipant.erase(tabParticipant.begin()+indice);
}
istream& operator>>(istream& in ,Evenemnet& evnet)
{
    cout<<"Donnez le nom de l'évenement /n"<<endl;
    in>>evnet.nom;
    cout<<"Donnez l'emplacement de l'evenement"<<endl;
    in>>evnet.emplacement;
    cout<<"Donnez la date de l'evenement "<<endl;
    in>>evnet.date;
    Participant *p;
    cin>>*p;
    evnet.tabParticipant.push_back(p);
    return in;
}

ostream& operator<< (ostream& out , Evenemnet& e)
{
    out<<"\n lecture du nom "<<e.nom<<endl;
    out<<"\n lecture du l'emplacement "<<e.emplacement<<endl;
    out<<"\n lecture de date "<<e.date<<endl;
    out<<"La liste de connexion de ce personne est  "<<endl;
     for(int i=0;i<e.tabParticipant.size();i++)
    {
        out<<e.tabParticipant[i]<<endl;;
    }
    return out;
}
Evenemnet& Evenemnet::operator= (const Evenemnet& e)
{
    if(this!=&e)
    {
      nom=e.nom;
      emplacement=e.emplacement;
      date=e.date;
      for(int i=0;i<tabParticipant.size();i++)
      {
          delete tabParticipant[i];
      }
      tabParticipant.clear();
      for(int i=0;i<e.tabParticipant.size();i++)
      {
         tabParticipant.push_back( e.tabParticipant[i]);
      }

    }
    return *this;
}
