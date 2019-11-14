#include <iostream>

using namespace std;

int main()
{
	string passw = "forgot", answer;

	cout << "Enter pw" << endl;
	cin >> answer;

	if (answer == passw) {
		cout << "Correct!";
	}
	else {
		cout << "Wrong!";
	}


	return 0;
}