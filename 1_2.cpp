#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define IVA 1.16
using namespace std; // (Use standard library)
int calcIva(int precio);

int main()
{
	int precio = 0;

	cout << "Enter the price:\n";
	cin >> precio;
	cout << "Price with IVA is: " << calcIva(precio);

	return 0;
}

int calcIva(int precio) {
	int answer = precio * IVA;
	return answer;
}