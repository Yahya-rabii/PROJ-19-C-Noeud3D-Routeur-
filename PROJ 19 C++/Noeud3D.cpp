#include "Routeur.h"
#include "Noeud3D.h"
#include <iostream>

using namespace std;

Noeud3D::Noeud3D()
{

	this->x=0;
	this->y=0;
	this->z=0;
}

Noeud3D::Noeud3D(double x1, double y1, double z1)
{

	this->x = x1;
	this->y = y1;
	this->z = z1;

}

Noeud3D::Noeud3D(const Noeud3D& a)
{

	this->x = a.x;
	this->y = a.y;
	this->z = a.z;

}

void Noeud3D::affich_p() const
{

	cout << " x= " << this->x <<endl;
	cout << " y= " << this->y <<endl;
	cout << " z= " << this->z <<endl;


}

bool Noeud3D::cmp_n(Noeud3D& A) const
{
	

	if (this->x == A.x) {


		if (this->y == A.y) {



			if (this->z == A.z) {


				return true;

			}
			else return false;

		}
		else return false;


	}
	else return false;

}

bool Noeud3D::operator==(const Noeud3D& A) const
{
	return false;
}
