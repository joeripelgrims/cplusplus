#include <iostream>

using namespace std;

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