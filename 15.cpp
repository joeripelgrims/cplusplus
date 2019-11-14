#include <iostream>

using namespace std;

int main()
{
	int discountNum = 550, cost = 0;

	cout << "Buying something for this amount: " << endl;
	cin >> cost;

	if (cost > discountNum) {
		cout << "You get a 15% discount! The cost is: " << cost * 0.85 << endl;
		cout << "The discount was: " << cost * 0.15 << endl;
	}
	else {
		cout << "No discount! The cost is " << cost << endl;
	}



	return 0;
}