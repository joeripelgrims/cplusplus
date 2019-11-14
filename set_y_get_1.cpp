#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Pared {
private:
	int ancho;
	int alto;
public:
	Pared();
	void setPared(int p_ancho, int p_alto);
	int getPared_ancho();
	int getPared_alto();
};

Pared::Pared() {

}
void Pared::setPared(int p_ancho, int p_alto) {
	ancho = p_ancho;
	alto = p_alto;
}
int Pared::getPared_ancho() {
	return ancho;
}
int Pared::getPared_alto() {
	return alto;
}

int main()
{
	Pared pared1;
	pared1.setPared(10, 15);
	cout << "Here's some values: " << pared1.getPared_alto() << " " << pared1.getPared_ancho() << endl;

	return 0;
}