#include <iostream>

using namespace std;

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