#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#include <cmath> // (Grants access to some math functions)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	double weight, height, bmi;
	string name;

	cout << "What's your name?" << endl;
	cin >> name;
	cout << "What's your weight?" << endl;
	cin >> weight;
	cout << "What's your height?" << endl;
	cin >> height;

	bmi = weight / pow(height, 2);

	if (bmi < 18.5) {
		cout << "Hello " << name << ", you are underweight.";
	}
	else if (bmi > 18.4 && bmi < 25 ) {
		cout << "Hello " << name << ", you are average weight.";
	}
	else if (bmi > 24.9 && bmi < 30) {
		cout << "Hello " << name << ", you are overweight.";
	}
	else if (bmi > 29.9 && bmi < 40) {
		cout << "Hello " << name << ", you are obese.";
	}
	else {
		cout << "Hello " << name << ", you are morbidly obese.";
	}
	
	return 0;
}