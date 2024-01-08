#ifndef CERCLE_H
#define CERCLE_H

#include "Point.h"
#include <iostream>

using namespace std;

class Cercle{
	private :
		int rayon;
		string couleur;
		Point coordonnees;
		
	public :
		Cercle(Point coordonnee);
		Cercle();
		~Cercle();
		
		void setRayon (int a);
		int getRayon ();
		
		void setCouleur (string color);
		string getCouleur ();
		
		int getCoordonneesX ();
		int getCoordonneesY ();
		
		double distance_cercle (Cercle circ);
		bool estEcraser (Cercle circ);
		pair<double, double> deplacer_cercle (Cercle circ);
};

bool verifier_position(Cercle circ[], int nbr ) ;

#endif
