#include <iostream>		//Accessing system libary iostream.

using namespace std;		//Abillity to use cin, cout, etc.

int main() {		//Main Body
	int x;		//Created interger value x.
	cout << "What is the tempature?" << endl;		//Prints char in "".
	cin >> x;		//User inputs value of x.
	if (x > 85) {		//Checking if x value is greater than 85.
		cout << "Turn the AC on." << endl;		//Prints char in "".
	}

	return 0;		//Return 0 if program works
}
