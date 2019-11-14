#include <iostream>
using namespace std;

int main()
{
	string sex;
	int age = 0;

	cout << "Type your sex: " << endl;
	cin >> sex;
	cout << "Type your age: " << endl;
	cin >> age;

	if (age <= 4) {
		cout << "You are a " << sex << " baby.";
	}
	else if (age > 5 && age < 13) {
		cout << "You are a " << sex << " infant.";
	}
	else if (age > 12 && age < 18) {
		cout << "You are a " << sex << " adolescent.";
	}
	else if (age > 17 && age < 61) {
		cout << "You are a " << sex << " adult.";
	}
	else {
		cout << "You are a" << sex << " senior.";
	}


	return 0;
}