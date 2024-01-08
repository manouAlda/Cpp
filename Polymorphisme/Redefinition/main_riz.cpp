#include <iostream>
#include <string>

#include "Riz.h"
#include "RizA.h"
#include "RizC.h"
#include "RizS.h"

int main(){

	RizA vary = RizA();
	RizC jaune = RizC();
	RizS soso = RizS();
	
	vary.preparation();
	cout << "****" << endl;
	jaune.preparation();
	cout << "****" << endl;
	soso.preparation();

	return 0;
}
