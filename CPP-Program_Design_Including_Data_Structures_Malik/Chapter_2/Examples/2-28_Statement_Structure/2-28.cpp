#include <iostream>
#include "2-28.h"

using namespace std;

const int NUMBER = 12;

int main()
{
	int firstNumber;
	int secondNumber;

	firstNumber = 18;
	cout << "Line 14: firstNumber = " << firstNumber << endl;

	cout << "Line 16: Enter an integer: ";
	cin >> secondNumber;
	cout << endl;

	cout << "Line 20: secondNumber = " << secondNumber << endl;

	firstNumber = firstNumber + NUMBER + 2 * secondNumber;

	cout << "Line 24: The new value of firstNumbeer is " << firstNumber << endl;

	return 0; 
}