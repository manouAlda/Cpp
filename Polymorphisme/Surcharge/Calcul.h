#ifndef CALCUL_H
#define CALCUL_H

#include <string>

using namespace std;

class Calcul
{
	private :
		int a;
		int b;
		float x;
		float y;
		string line1;
		string line2;
		
	public:
		Calcul();
		~Calcul();
		void setA(int l);
		int getA();
		void setB(int l);
		int getB();
		void setX(float l);
		float getX();
		void setY(float l);
		float getY();
		void setLine1(string c);
		string getLine1();
		void setLine2(string c);
		string getLine2();
		int addition (int a, int b);
		float addition (float x, float y);
		string addition (string a, string b);
};

#endif
