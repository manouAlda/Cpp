#ifndef CIRC_H
#define CIRC_H

#include <string>
#include "Form2D.h"

using namespace std;

class Circ : public Form2D
{
	private :
		double rayon;
	
	public:
		Circ();
		~Circ();
		void setRayon(double l);
		double getPerimetre();
		double surface();
};

#endif
