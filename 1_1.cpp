#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define IVA 1.16
using namespace std; // (Use standard library)

int main()
{
	int precio = 0;
	cout << "Enter the price:\n";
	cin >> precio;
	cout << "Price with IVA is: " << precio * IVA;

	return 0;
}