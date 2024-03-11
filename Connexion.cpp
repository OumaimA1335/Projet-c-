#include <iostream>
#include "Connexion.h"

Connexion::Connexion(int date,float duree)
{
    this->date=date;
    this->duree=duree;
}
Connexion::Connexion()
{
    date=0;
    duree=0;
}
Connexion::~Connexion()
{
    cout<<"Appel du destructeur de la classe connexion \n"<<endl;
}
void Connexion::saisirConnexion()
{
    cout<<"Donnez la date de connexion \n"<<endl;
    cin>>date;
    cout<<"Donnez la duree de connexion \n"<<endl;
    cin>>duree;

}
void Connexion::afficher()
{
    cout<<"la date du connexion est "<<date<<" et la duree est "<<duree<<endl;
}
int Connexion::GetDate()
{
    return date;
}
float Connexion::GetDuree()
{
    return duree;
}
ostream& operator<< (ostream& out , Connexion& con)
{
    out<<"\n lecture du date "<<con.date<<endl;
    out<<"\n lecture du duree "<<con.duree<<endl;
    return out;
}
istream& operator>> (istream& in , Connexion& con)
{
    cout<<"Saisie de date et durre\n"<<endl;
    in>>con.date;
    in>>con.duree;
    return in;
}

