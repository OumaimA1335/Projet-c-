#include <iostream>
#include <string>
#include "Personne.h"
#include "Connexion.h"
using namespace std;

Personne::Personne()
{
    char resp;
    this->nom="";
    this->prenom="";
    this->address_mail="";
    Connexion* c = new Connexion();
    do
    {
        c->saisirConnexion();
        TabConnexion.push_back(c);
        cout<<"Voulez-vous ajouter une autre connexion \n "<< endl;
        cin>>resp;

    }while(resp=='oui'||resp=='OUI');
}
Personne::Personne(string nom,string prenom,string adress_mail )
{
    char resp;
    this->nom=nom;
    this->prenom=prenom;
    this->address_mail=adress_mail;
    Connexion* c = new Connexion();
    do
    {
        c->saisirConnexion();
        TabConnexion.push_back(c);
        cout<<"Voulez-vous ajouter une autre connexion \n "<< endl;
        cin>>resp;

    }while(resp=='oui'||resp=='OUI');
}
Personne::Personne(const Personne& p)
{
    nom =p.nom;
    prenom=p.prenom;
    address_mail=p.address_mail;
    for(int i =0;i<p.TabConnexion.size();i++)
    {
        TabConnexion.push_back(p.TabConnexion[i]);
    }
}
Personne::~Personne()
{
      for(int i =0;i<TabConnexion.size();i++)
    {
        delete TabConnexion[i];
    }
}
void Personne::saisirPersonne()
{
    cout<<"Donnez le nom \n"<<endl;
    cin>>nom;
    cout<<"Donnez le prenom \n"<<endl;
    cin>>prenom;
    cout<<"Donnez l'adresse mail \n"<<endl;
    cin>>address_mail;
   //probabilite d'ajouter le code de connexion
}
void Personne::afficher()
{
    cout<<"Le nom est "<<nom<<" le prénom est "<<"l'adresse mail est "<<address_mail<<endl;
    cout<<"La liste de connexion de ce personne est  "<<endl;
    for(int i=0;i<TabConnexion.size();i++)
    {
        TabConnexion[i]->afficher();
    }
}
void Personne::ajouterConnexion()
{
    char resp;
    Connexion* c = new Connexion();
    do
    {
        c->saisirConnexion();
        TabConnexion.push_back(c);
        cout<<"Voulez-vous ajouter une autre connexion \n "<< endl;
        cin>>resp;

    }while(resp=='oui'||resp=='OUI');
}
ostream& operator<< (ostream& out , Personne& p)
{
    out<<"\n lecture du nom "<<p.nom<<endl;
    out<<"\n lecture du prenom "<<p.prenom<<endl;
    out<<"\n lecture du adresse mail "<<p.address_mail<<endl;
    out<<"La liste de connexion de ce personne est  "<<endl;
     for(int i=0;i<p.TabConnexion.size();i++)
    {
        out<<p.TabConnexion[i]<<endl;

    }

    return out;
}
istream& operator>> (istream& in , Personne& P)
{
    cout<<"Saisie de nom et prénom et adresse mail\n"<<endl;
    in>>P.nom;
    in>>P.prenom;
    in>>P.address_mail;
    Connexion *c;
    cin>>*c;
    P.TabConnexion.push_back(c);
    return in;
}
Personne& Personne::operator= (const Personne& p)
{
    if(this!=&p)
    {
      nom=p.nom;
      prenom=p.prenom;
      address_mail=p.address_mail;
      for(int i=0;i<TabConnexion.size();i++)
      {
          delete TabConnexion[i];
      }
      TabConnexion.clear();
      for(int i=0;i<p.TabConnexion.size();i++)
      {
         TabConnexion.push_back( p.TabConnexion[i]);
      }

    }
    return *this;
}




