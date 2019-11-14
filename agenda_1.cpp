#include <iostream>
#include <string.h>
using namespace std;

class Register {
private:
	string name;
	string telephone;
public:
	void set_values(string, string);
	void get_values() {
		cout << "Name: " << name << endl;
		cout << "Telephone number: " << telephone << endl;
	};
};

void Register::set_values(string namep, string telephonep) {
	name = namep;
	telephone = telephonep;
}

int main()
{
	Register reg1;
	reg1.set_values("Joeri", "6643560186");
	reg1.get_values();


	return 0;
}