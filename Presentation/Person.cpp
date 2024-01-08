#include "Person.h"
#include <iostream>

Person::Person(){
	name="";
	age=0;
}

void Person::setName (string anarana){
	name = anarana;
}

string Person::getName (){
	return name;
}

void Person::setAge (int taona){
	age = taona;
}
		
int Person::getAge (){
	return age;
}

void Person::sePresenter (){
	cout << "Name : " << name << "\n";
	cout << "Age  : " << age << endl;
}

