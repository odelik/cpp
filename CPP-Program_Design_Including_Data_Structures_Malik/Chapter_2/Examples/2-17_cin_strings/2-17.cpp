#include <iostream>
#include <string>

using namespace std;

int main()
{
	string firstName;
	string lastName;
	int age;
	double weight;

	cout << "Enter first name, last name, age, and weight, separated by spaces." << endl;
	cin >> firstName >> lastName >> age >> weight;

	cout << endl << "Name: " << firstName << " " << lastName << endl;
	cout << "Age: " << age << endl;
	cout << "Weight: " << weight << endl;

	return 0;
}