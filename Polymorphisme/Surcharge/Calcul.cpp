#include <iostream>
#include <cstring>
#include "Calcul.h"

Calcul::Calcul (){
	
}

Calcul::~Calcul(){
	
}

void Calcul::setA(int l){
	a = l ;
}

int Calcul::getA(){
	return a;
}

void Calcul::setB(int l){
	b = l ;
}

int Calcul::getB(){
	return b;
}

void Calcul::setX(float l){
	x = l ;
}

float Calcul::getX(){
	return x;
}

void Calcul::setY(float l){
	y = l ;
}

float Calcul::getY(){
	return y;
}

void Calcul::setLine1 (string c){
	line1 = c;
}

string Calcul::getLine1(){
	return line1;
}

void Calcul::setLine2 (string c){
	line2 = c;
}

string Calcul::getLine2(){
	return line2;
}

int Calcul::addition (int a, int b){
	return (a+b);
}

float Calcul::addition (float x, float y){
	return (x+y);
}

string Calcul::addition (string a, string b){
	return a+b;
}
