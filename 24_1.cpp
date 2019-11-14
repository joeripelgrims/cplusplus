#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class person {
private:
	string name;
	int age;
public:
	void reading() {
		cout << "I am " << name << " and I am reading a book." << endl;
	};
	void walking() {
		cout << "I am " << name << ", my age is " << age << " and I am running a marathon." << endl;
	};
	void set_values(string, int);
};

void person::set_values(string namep, int agep) {
	age = agep;
	name = namep;
}

int main()
{
	person Jane;
	Jane.set_values("Jane", 34);
	Jane.reading();
	Jane.walking();
	return 0;
}