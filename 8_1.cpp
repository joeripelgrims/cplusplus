#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	int x = 0, y = 0, temp;

	cout << "Enter x: " << endl;
	cin >> x;

	cout << "Enter y: " << endl;
	cin >> y;

	cout << "First the value of x is: " << x << endl;
	cout << "First the value of y is: " << y << endl;

	temp = x;
	x = y;
	y = temp;

	cout << "Now x: " << x << endl;
	cout << "Now y: " << y << endl;


	return 0;
}