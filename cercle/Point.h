#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class Point{
	private:
		double x;
		double y;
		
	public:
		Point();
		~Point();
		
		void setX (double a);
		double getX ();
		
		void setY (double b);
		double getY ();

};

#endif
