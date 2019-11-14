#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#include <stdlib.h> // (Grants access to classes?)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class Lion {
private:
	int age; // Here we declare the attributes used in the class, always private.
	string gender;
public: // Here we declare the methods (functions)
	Lion(int, string); // "Lion" is the constructor, which must have the same name as the class.
					   // It's declared publicly and as if it were a function.
					   // Even if you have multiple constructors for the same class.
					   // In parenthesis is a list of ALL the variable types of those we declared above. 
	void hunt();
	void sleep();
};

// Method constructor
Lion::Lion (int lionAge, string lionGender) {
	age = lionAge;
	gender = lionGender;
}

void Lion::hunt() {
	cout << "The lion's age is" << age << "some more stuff here." << endl;
}

void Lion::sleep() {
	cout << "The lion of the gender " << gender << "is going to bed." << endl;
}

int main()
{
	//We're delcaring an object here, which we always do in main.
	Lion lion1(5, "Male");
	Lion lion2(4, "Female");
	//Lion lion3();

	lion1.hunt();
	lion2.sleep();
	


	return 0;
}