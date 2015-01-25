#include <iostream>
#include <string>
#include "2-29.h"

using namespace std;

int main()
{
	int number;
	double height;
	string name;

	cout << "Enter an integer: ";
	cin >> number;
	cout << endl;

	cout << "number: " << number << endl;
	
	cout << "Enter the first name: ";
	cin >> name;
	cout << endl;

	cout << "Enter the height in inches: ";
	cin >> height;
	cout << endl;

	cout << "Name: " << name << endl;
	cout << "Height: " << height << endl;

	return 0;
}