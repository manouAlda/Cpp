#include "Cercle.h"
#include <iostream>
#include <cmath>

Cercle::Cercle(Point coordonnee) {
	rayon = 0;
	couleur="";
	coordonnees = coordonnee;
}

Cercle::Cercle() {
	rayon = 0;
	couleur="";
	
}

Cercle::~Cercle(){
	
}

void Cercle::setRayon (int a){
	rayon = a;
}

int Cercle::getRayon (){
	return rayon;
}

void Cercle::setCouleur (string color){
	couleur = color;
}
		
string Cercle::getCouleur (){
	return couleur;
}

int Cercle::getCoordonneesX(){
	return coordonnees.getX();
}

int Cercle::getCoordonneesY(){
	return coordonnees.getY();
}

double Cercle::distance_cercle (Cercle circ){
	return sqrt(pow(coordonnees.getX() - circ.getCoordonneesX(), 2) + pow(coordonnees.getY() - circ.getCoordonneesY(), 2));
}

bool Cercle::estEcraser(Cercle circ){
	int test=0;
	double dist_total = rayon + circ.rayon;
	double distance = distance_cercle (circ);
	
	if(dist_total <= distance)	test = 0;
	else if(dist_total > distance )		test = 1;
	
	return test;
}

pair<double, double> Cercle::deplacer_cercle(Cercle circ) {
    double distance = distance_cercle(circ);
    double superposition = (rayon + circ.rayon) - distance;
    double x2 = 0, y2 = 0;
    double vecX = 0, vecY = 0;
    double tmp1 = 0, tmp2 = 0;
    double newX = 0, newY =0;

    if (estEcraser(circ)) {

        if (getCoordonneesX() < circ.getCoordonneesX() && getCoordonneesY() < circ.getCoordonneesY()) {
            x2 = -superposition;
            y2 = -superposition;
        } else if (getCoordonneesX() < circ.getCoordonneesX() && getCoordonneesY() > circ.getCoordonneesY()) {
            x2 = -superposition;
            y2 = superposition;
        } else if (getCoordonneesX() > circ.getCoordonneesX() && getCoordonneesY() < circ.getCoordonneesY()) {
            x2 = superposition;
            y2 = -superposition;
        } else if (getCoordonneesX() > circ.getCoordonneesX() && getCoordonneesY() > circ.getCoordonneesY()) {
            x2 = superposition;
            y2 = superposition;
        } else if (getCoordonneesX() == circ.getCoordonneesX() && getCoordonneesY() < circ.getCoordonneesY()) {
            y2 = -superposition;
        } else if (getCoordonneesX() < circ.getCoordonneesX() && getCoordonneesY() == circ.getCoordonneesY()) {
            x2 = -superposition;
        } else if (getCoordonneesX() == circ.getCoordonneesX() && getCoordonneesY() > circ.getCoordonneesY()) {
            y2 = superposition;
        } else if (getCoordonneesX() > circ.getCoordonneesX() && getCoordonneesY() == circ.getCoordonneesY()) {
            x2 = superposition;
        } else if (getCoordonneesX() == circ.getCoordonneesX() && getCoordonneesY() == circ.getCoordonneesY()) {
            y2 = rayon + circ.rayon;
        }
        tmp1 = getCoordonneesX();
        tmp2 = getCoordonneesY();

		newX =  x2 + tmp1;
		newY = y2 + tmp2;
		
        coordonnees.setX(newX);
        coordonnees.setY(newY);

        vecX = getCoordonneesX() - tmp1;
        vecY = getCoordonneesY() - tmp2;
        
        if(vecX == 0 ){
			vecX = x2;			
		}
		if (vecY ==0){
			vecY= y2;
		}

        return make_pair(vecX, vecY);
    } else {
        return make_pair(0, 0);
    }
}

bool verifier_position(Cercle circ[], int nbr ) {
    for (int i=0; i<nbr-1; i++){
		for (int j=i+1; j<nbr; j++){
			if (circ[i].estEcraser(circ[j])==1) {
                return 1; 
            } 
		}
	}
	return 0;
}
