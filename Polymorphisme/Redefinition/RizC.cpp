#include <iostream>
#include <cstring>
#include "RizC.h"

RizC::RizC (){
	new Riz();
}

RizC::~RizC(){
	
}

void RizC::preparation(){
	Riz::preparation();
	//cout << "Faire bouillir de l'eau" << endl;
	cout << "Verser le riz " << endl;
	cout << "Preparer les ingredients a ajouter avec le riz comme : carry ou tamtam , macedoine" << endl;
	cout << "Rassembler le tout et fini" << endl;
}
