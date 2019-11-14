#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#include <cmath>
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)
void applyMath(double a, double b);

int main()
{
	double num1, num2;

	cout << "Enter number 1:\n";
	cin >> num1;
	cout << "Enter number 2:\n";
	cin >> num2;
	applyMath(num1, num2);

	return 0;
}

void applyMath(double a, double b) {
	cout << "The sum of these numbers is: " << a + b << "\n";
	cout << "The rest of these numbers is: " << a - b << "\n";
	cout << "The multiplication of these numbers is: " << a * b << "\n";
	cout << "The division of these numbers is: " << a / b << "\n";
}