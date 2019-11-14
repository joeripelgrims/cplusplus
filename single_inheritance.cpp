#include <iostream>
using namespace std;

/*
Create an example of single inheritance between a superclass Mammals and 3 subclasses Man, Dog and Whale.
Superclass has 2 attributes (age, weight) and 1 or 2 methods for assigning and showing its values.
Each subclass has 1 attribute or method of its own, in addition to the inherited ones.
*/

class Mammals {
private:
	int age;
	double weight;
public:
	Mammals(int x, double y) {
		x = 1;
		y = 2;
		cout << "Hi." << endl;
	};
};



int main()
{
	cout << "Hello world!";


	return 0;
}