#include <iostream>
#include <cstring>
#include "Carre.h"
#include "Form2D.h"

Carre::Carre() {
	new Form2D();
}

Carre::~Carre(){
	
}

void Carre::setCote(double l){
	cote = l ;
}

double Carre::getPerimetre(){
	return (cote*4);
}

double Carre::surface(){
	return (cote*cote);
}
