#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	double num1, num2, num3, num4, num5, num6;

	cout << "Please enter number 1: \n";
	cin >> num1;
	cout << "Please enter number 2: \n";
	cin >> num2;
	cout << "Please enter number 3: \n";
	cin >> num3;
	cout << "Please enter number 4: \n";
	cin >> num4;
	cout << "Please enter number 5: \n";
	cin >> num5;
	cout << "Please enter number 6: \n";
	cin >> num6;

	cout.precision(2);
	cout << "Here is the result: " << (num1 + (num2 / num3)) / (num4 + (num5 / num6));
	cout.precision(5);
	cout << "Here is the result: " << (num1 + (num2 / num3)) / (num4 + (num5 / num6));


	return 0;
}