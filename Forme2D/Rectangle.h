#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include "Form2D.h"

using namespace std;

class Rectangle : public Form2D 
{
	private :
		double longueur;
		double largeur;
	
	public:
		Rectangle();
		~Rectangle();
		void setLongueur(double l);
		double getLongueur();
		void setLargeur(double l);
		double getLargeur();
		double getPerimetre();
		double surface();
};

#endif
