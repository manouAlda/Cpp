#include <iostream>
#include <cstring>
#include "RizS.h"

RizS::RizS (){
	new Riz();
}

RizS::~RizS(){
	
}

void RizS::preparation(){
	Riz::preparation();
	//cout << "Faire bouillir de l'eau" << endl;
	cout << "Verser le riz " << endl;
	cout << "Preparation finie apres 45min" << endl;
}
