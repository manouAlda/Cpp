#ifndef CARRE_H
#define CARRE_H

#include <string>
#include "Form2D.h"

using namespace std;

class Carre : public Form2D 
{
	private :
		double cote;
	
	public:
		Carre();
		~Carre();
		void setCote(double l);
		double getPerimetre();
		double surface();
};

#endif
