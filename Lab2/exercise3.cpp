#include <iostream>		//Accessing system libary iostream.

//Not using namespace std to call libary independently. 

int main() {		//Main body.
	int x;		//Created interger value x.
	std::cout << "What is the tempature today?" << std::endl;		//Prints char in "".
	std::cin >> x;		//User inputs value x.
	if((70 > x) || (x > 85)) {		//Checking if x value is in between 70-85.
		std::cout << "bad weather" << std::endl;		//Prints char in "".
	} 
	else {		//Runs if x value is <70 or >85
		std::cout << "good weather" << std:: endl;		//Prints char in "".
	}
	return 0;		//Return 0 if program works
}
