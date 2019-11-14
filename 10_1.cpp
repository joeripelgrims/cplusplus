#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

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