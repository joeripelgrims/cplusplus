#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	double prac = 0, teori = 0, partici = 0, resultado = 0;

	cout << "Please enter the student's Practical Score: " << endl;
	cin >> prac;
	cout << "Please enter the student's Theoretical Score: " << endl;
	cin >> teori;
	cout << "Please enter the student's Participation Score: " << endl;
	cin >> partici;

	prac *= 0.30;
	teori *= 0.60;
	partici *= 0.10;
	resultado = prac + teori + partici;

	cout << "The student's final percentage is: " << resultado << endl;


	return 0;
}