//============================================================================
// Name        : helloworld.cpp
// Author      : liu yang
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void printSentence(string insentence)
{
	cout << insentence << endl;
}


int main() {

	string myFirstSentence = "I love you , Bai Jing !";

	printSentence(myFirstSentence);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
