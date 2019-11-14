#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#include <cmath> // (Adds some math functions)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	// The hypothenuse of a right triangle is equal to the square root of the sum of the powers of the two
	// other sides.

	double sideA = 0, sideB = 0, hipo = 0;

	cout << "Enter side a: " << endl;
	cin >> sideA;
	cout << "Enter side b: " << endl;
	cin >> sideB;
	hipo = sqrt(pow(sideA, 2) + pow(sideB, 2));
	cout << hipo;


	return 0;
}