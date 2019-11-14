#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	int resultado = 0;

	cout << "How much is 39+50?" << endl;
	cin >> resultado;
	if (resultado == 39 + 50) {
		cout << "Correct answer!";
	}
	else {
		cout << "Wrong answer!";
	}


	return 0;
}