#include <iostream>
#include <cmath>

using namespace std;

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
