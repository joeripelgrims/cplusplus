#include <iostream>

using namespace std;

int main()
{
	int num = 0;

	cout << "Enter a number and I will tell you whether it is odd or even!" << endl;
	cin >> num;
	if (num % 2 == 0) {
		cout << "The number you've entered is PAR!";
	} else {
		cout << "The number you've entered is IMPAR!";
	}



	return 0;
}