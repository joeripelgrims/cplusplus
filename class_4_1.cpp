#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
//#include <stdlib.h>
using namespace std;

class dogs {
private:
	string furLength;
	char size;
	int maxAge;
public:
	void bark() {
		cout << "Woof! Woof!" << endl;
	}
};


int main()
{
	dogs pitBull;

	pitBull.bark();


	return 0;
}