#include <iostream>
#include <string.h>
using namespace std;

class Register {
private:
	char name[20];
	char telephone[10];
public:
	Register() {
		
	};
	void get_values() {
		cout << "Name: " << name << endl;
		cout << "Telephone number: " << telephone << endl;
	};
};

void Register::set_values(char namep, char telephonep) {


	//strcpy(name, "");
	//strcpy(telephone, "");
}

int main()
{
	Register reg1;



	return 0;
}