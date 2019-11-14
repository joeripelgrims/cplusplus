#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#include <stdlib.h>
#include <string>
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class rectangle {
public:
	void setHeight(int h) {
		rectHeight = h;
	}
	void setWidth(int w) {
		rectWidth = w;
	}
	int getHeight(int h) {
		return rectHeight;
	}
	int getWidth(int w) {
		return rectWidth;
	}
private:
	int rectHeight;
	int rectWidth;
};

int main()
{
	rectangle objectname;

	return 0;
}