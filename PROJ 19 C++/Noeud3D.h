#pragma once
#include <string.h>

class Noeud3D
{

private:

	double x;
	double y;
	double z;

public:
	Noeud3D();
	Noeud3D(double x , double y , double z);
	Noeud3D(const Noeud3D &a);
	
	void affich_p()const;
	bool cmp_n(Noeud3D& A)const;
	bool operator ==( const Noeud3D& A)const;


};
