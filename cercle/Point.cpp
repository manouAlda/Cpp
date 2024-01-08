#include "Point.h"
#include <iostream>

Point::Point(){
	x=0;
	y=0;
}

Point::~Point(){
	
}

void Point::setX (double a){
	x = a;
}

double Point::getX (){
	return x;
}

void Point::setY (double b){
	y = b;
}
		
double Point::getY (){
	return y;
}

