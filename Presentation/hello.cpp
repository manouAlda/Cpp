#include <iostream>
#include <string>

int main(){
	
	bool how{};
	int number{13};
	float some_num{14.1};
	char c{'A'};
	std::string str{"Declaration de chaine :"};
		
	number = 189'56  ;
	
	std::cout << "Hello World !" << std::endl; 
	std::cout << how <<  "\n" << number << "\n" << some_num << "\n"; 
	std::cout << c << "\n" << str; 
	std::cin >> some_num;
	std::cout << some_num << "\n"; 
	
	return 0;
}
