#include "Routeur.h"
#include "Noeud3D.h"
#include <iostream>

using namespace std;

int Routeur::cpt_ID = 0;


Routeur::Routeur():ID(++cpt_ID)
{
	
	this->taille_ram = 0;
	this->nom = "NULL";
	this->A ;
	this->B ;
	this->C ;
}

Routeur::Routeur(string name, int taille_r, Noeud3D N1, Noeud3D N2, Noeud3D N3) :ID(++cpt_ID)
{
	this->taille_ram = taille_r;
	this->nom = name;
	this->A=N1;
	this->B=N2;
	this->C=N3;


}

Routeur::Routeur(const Routeur& r) :ID(++cpt_ID)
{

	this->taille_ram = r.taille_ram;
	this->nom = r.nom;
	this->A = r.A;
	this->B = r.B;
	this->C = r.C;

}

void Routeur::info() const
{

	cout << " ram size ->"<< this->taille_ram<< endl;
	cout << " the id ->"  << Routeur::ID << endl;
	
	cout << " Noeud 1 ->";
	this->A.affich_p();
	cout << endl;

	cout << " Noeud 2 ->";
	this->B.affich_p();
	cout << endl;

	cout << " Noeud 3 ->";
	this->C.affich_p();
	cout << endl;


}

bool Routeur::point_com(Routeur& R) const
{
	if (this->A.cmp_n(R.A) || this->A.cmp_n(R.B) || this->A.cmp_n(R.C)) {

		return true;

	 }

	else if (this->B.cmp_n(R.A) || this->B.cmp_n(R.B) || this->B.cmp_n(R.C)) {


			return true;

		}

	else if (this->C.cmp_n(R.A) || this->C.cmp_n(R.B) || this->C.cmp_n(R.C)) {


		return true;

	}
	

	else
	{
		return false;
	}


}

int Routeur::nbr_obj() const
{

	int c = Routeur::cpt_ID;
	return c;

}
