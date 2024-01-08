#include <iostream>
#include <cstring>
#include "Form2D.h"

Form2D::Form2D(){
	couleur = "black";
}

Form2D::~Form2D(){
	
}

void Form2D::setCouleur (string color){
	couleur = color;
}

string Form2D::getCouleur(){
	return couleur;
}

//~ void Form2D::afficherPerimetre (double perimetre){
	//~ cout << "Perimetre = " << perimetre << endl ;
//~ }

//~ void Form2D::afficherSurface (double surface){
	//~ cout << "Surface = " << surface << endl ;
//~ }

void Form2D::afficherPerimetre (double longueur, double largeur){
	cout << "Perimetre = " << (longueur+largeur)/2 << endl ;
}

void Form2D::afficherSurface (double longueur, double largeur){
	cout << "Surface = " << (longueur*largeur) << endl ;
}
