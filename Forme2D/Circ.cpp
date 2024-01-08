#include <iostream>
#include <cstring>
#include "Circ.h"
#include "Form2D.h"

#define PI 3.14

Circ::Circ() {
	new Form2D();
}

Circ::~Circ(){
	
}

void Circ::setRayon(double l){
	rayon = l ;
}

double Circ::getPerimetre(){
	return (2*PI*rayon);
}

double Circ::surface(){
	return (PI*rayon*rayon);
}
