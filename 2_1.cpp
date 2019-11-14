#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	int num1, num2;

	cout << "Enter number 1:\n";
	cin >> num1;
	cout << "Enter number 2:\n";
	cin >> num2;
	cout << "The sum of these numbers is: " << num1 + num2 << "\n";
	cout << "The rest of these numbers is: " << num1 - num2 << "\n";
	cout << "The multiplication of these numbers is: " << num1 * num2 << "\n";
	cout << "The division of these numbers is: " << num1 / num2 << "\n";


	return 0;
}