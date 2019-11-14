#include <iostream>

using namespace std;

int main()
{
	int choice = 0;

	cout << "Option 1: \nOption 2: \nOption 3:  " << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Welcome to option 1!";
		break;
	case 2:
		cout << "Welcome to option 2!";
		break;
	case 3:
		cout << "Welcome to option 3!";
		break;
	default:
		cout << "You have defaulted. Oops!";
		break;
	}



	return 0;
}