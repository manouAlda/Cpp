#ifndef PERSON_H
#define PERSON_H

//#include <string>
#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		int age;
		
	public:
		Person();
		//~ ~Person();
		void setName (string anarana);
		string getName ();
		void setAge (int taona);
		int getAge ();
		void sePresenter();
};

#endif
