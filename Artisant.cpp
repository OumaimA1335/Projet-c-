#include "Artisant.h"
using namespace std;

Artisant::Artisant():Personne()
{

}
Artisant::Artisant(string nom, string prenom ,string adresse_mail ,string specialite):Personne(nom,prenom,adresse_mail)
{
    this->specialite=specialite;
    cin>>stand;

}
Artisant::~Artisant()
{
    cout<<"Appel de destructeur \n"<<endl;
}
void Artisant::saisirPersonne()
{
    Personne::saisirPersonne();
    cout<<"Donnez la spécialité de l'artisant\n"<<endl;
    cin>>specialite;
    cout<<"Saisir des informmations relatives au stand de ce artisant \n"<<endl;
    stand.saisir();
}

void Artisant::afficher()
{
   Personne::afficher();
   cout<<"la spécialite de l'artisant est "<<specialite<<"\n"<<endl;
   cout<<"les informations relative au stand de ce artisant sont \n"<<endl;
   stand.afficher();
}
ostream& operator<<(ostream& out ,Artisant& artisant)
{
    Personne* p =&artisant;
    out<<p;
    out<<"la specialite de l'artisant est "<<artisant.specialite<<"\n"<<endl;
    out<<"les informations relative au stand de ce artisant sont"<<artisant.stand<<"\n"<<endl;
}
istream& operator>>(istream& in ,Artisant& artisant)
{
    Personne* p =&artisant;
    in>>*p;
    cout<<"Donnez la spécialité de l'artisant\n"<<endl;
    in>>artisant.specialite;
    cout<<"Saisir des informmations relatives au stand de ce artisant \n"<<endl;
    in>>artisant.stand;


}

