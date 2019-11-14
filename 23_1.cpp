#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

int main()
{
	double costP = 1200, costS = 2200, costB = 4100;
	char level, education;

	cout << "What level are you entering?\n(P)rimaria\n(S)ecundaria\n(B)achillerato\n";
	cin >> level;
	cout << "What is your former education?\n(P)ublic\nPr(i)vate\n";
	cin >> education;


	switch (level) {
	case 'p':
		switch (education) {
		case 'p':
			cout << "Entering the primaria, having formerly studied at the public level, your cost will be: " << costP * 0.5;
			break;
		case 'i':
			cout << "Entering the primaria, having formerly studied at the private level, your cost will be: " << costP * 0.75;
			break;
		default:
			cout << "You have entered an invalid entry." << endl;
		}
		break;
	case 's':
		switch (education) {
		case 'p':
			cout << "Entering the secundaria, having formerly studied at the public level, your cost will be: " << costS * 0.6;
			break;
		case 'i':
			cout << "Entering the primaria, having formerly studied at the private level, your cost will be: " << costS * 0.8;
			break;
		default:
			cout << "You have entered an invalid entry." << endl;
		}
		break;
	case 'b':
		switch (education) {
		case 'p':
			cout << "Entering the bachillerato, having formerly studied at the public level, your cost will be: " << costB * 0.7;
			break;
		case 'i':
			cout << "Entering the bachillerato, having formerly studied at the private level, your cost will be: " << costB * 0.85;
			break;
		default:
			cout << "You have entered an invalid entry." << endl;
		}
		break;
	default:
		cout << "You have entered an invalid entry." << endl;
	}
	return 0;
}