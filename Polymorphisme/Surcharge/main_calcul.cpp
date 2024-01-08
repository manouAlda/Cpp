#include <iostream>
#include <string>

#include "Calcul.h"

int main(){

	Calcul kajy = Calcul();
	
	kajy.setA(13);
	kajy.setB(2);
	kajy.setX(13.4);
	kajy.setY(2.1);
	kajy.setLine1("Bon");
	kajy.setLine2("jour ! ");
	
	cout << "Addition int : " << kajy.addition(kajy.getA(), kajy.getB()) << endl ;
	cout << "Addition float : " << kajy.addition(kajy.getX(), kajy.getY()) << endl ;
	cout << "Addition float : " << kajy.addition(kajy.getLine1(), kajy.getLine2()) << endl ;

	return 0;
}
