#pragma once
#include <iostream>



class Routeur
{

private:
	const  int ID;
	static int cpt_ID;
	string nom;
	int taille_ram;
	Noeud3D A;
	Noeud3D B;
	Noeud3D C;

public:
	Routeur();
	Routeur(string nom ,int taille_ram ,Noeud3D A ,Noeud3D B, Noeud3D C);
	Routeur(const Routeur &r);
	void info()const;
	bool point_com(Routeur &R)const;
	int nbr_obj()const;
};
