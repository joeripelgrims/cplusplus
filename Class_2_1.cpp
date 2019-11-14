#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class bananaclass {
private:
	string bananastring = "I'm eating bananas all day.";
public:
	void eatBananas() {
		cout << bananastring << endl;

	}
};

int main()
{
	bananaclass bananaobject;
	
	bananaobject.eatBananas();

	return 0;
}