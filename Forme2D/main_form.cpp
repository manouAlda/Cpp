#include <iostream>
#include <string>

#include "Form2D.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Circ.h"

int main(){

	Rectangle rect = Rectangle();
	Carre car = Carre();
	Circ cercle = Circ(); 
	
	rect.setLongueur(3);
	rect.setLargeur(2);
	rect.setCouleur("Blue");
	cout << "Rectangle  : " << rect.getCouleur() << endl << "*********" <<endl;
	rect.afficherPerimetre(rect.getLongueur(), rect.getLargeur());
	rect.afficherSurface(rect.getLongueur(), rect.getLargeur());
	
	car.setCote(2);
	car.setCouleur("White");
	cout << "Carre : " << car.getCouleur() << endl << "*****" <<endl;
	//car.afficherPerimetre(car.getPerimetre());
	//car.afficherSurface(car.surface());
	
	cercle.setRayon(3);
	cercle.setCouleur("Purple");
	cout << "Cercle : " << cercle.getCouleur() << endl << "******" <<endl;
	//cercle.afficherPerimetre(cercle.getPerimetre());
	//cercle.afficherSurface(cercle.surface());

	return 0;
}
