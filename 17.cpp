#include <iostream>

using namespace std;

int main()
{
	int choice = 0;

	cout << "Day 1: \nDay 2: \nDay 3: \nDay 4: \nDay 5: \nDay 6: \nDay 7: " << endl;
	cin >> choice;

	switch (choice) {
	case 1:
		cout << "Welcome to Monday!";
		break;
	case 2:
		cout << "Welcome to Tuesday!";
		break;
	case 3:
		cout << "Welcome to Wednesday!";
		break;
	case 4:
		cout << "Welcome to Thursday!";
		break;
	case 5:
		cout << "Welcome to Friday!";
		break;
	case 6:
		cout << "Welcome to Saturday!";
		break;
	case 7:
		cout << "Welcome to Sunday!";
		break;
	default:
		cout << "You have defaulted. Oops!";
		break;
	}
	return 0;
}