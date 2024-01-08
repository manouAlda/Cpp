#include <string>
#include <iostream>
#include "Person.h"

int main(){
	Person pers1=Person();
	
	pers1.setName("Rabe");
	pers1.setAge(17);
	
	pers1.sePresenter();
	
	Person *pers2= new Person();
	
	pers2->setName("Niharisoa");
	pers2->setAge(18);
	
	pers2->sePresenter();
	
	Person *pers3= new Person();
	
	pers3->setName("Manou");
	pers3->setAge(19);
	
	pers3->sePresenter();
}
