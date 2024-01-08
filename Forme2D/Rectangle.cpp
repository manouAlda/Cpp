#include <iostream>
#include <cstring>
#include "Rectangle.h"
#include "Form2D.h"

Rectangle::Rectangle (){
	new Form2D();
}

Rectangle::~Rectangle(){
	
}

void Rectangle::setLongueur(double l){
	longueur = l ;
}

double Rectangle::getLongueur(){
	return longueur;
}

void Rectangle::setLargeur(double l){
	largeur = l ;
}

double Rectangle::getLargeur(){
	return largeur;
}

double Rectangle::getPerimetre(){
	return ((longueur+largeur)/2);
}

double Rectangle::surface(){
	return (longueur*largeur);
}
