#ifndef FORM2D_H
#define FORM2D_H

#include <string>

using namespace std;

class Form2D 
{
	private :
		string couleur;
		
	public:
		Form2D();
		~Form2D();
		void setCouleur(string color);
		string getCouleur();
		void afficherPerimetre(double longueur , double largeur);
		void afficherSurface(double longueur , double largeur);
};

#endif
