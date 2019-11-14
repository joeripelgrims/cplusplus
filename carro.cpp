#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class Carro {
private:
	string marca;
	int matricula;
	string color;
public:
	Carro();
	void setDatos(string, int, string);
	void getDatos();
};
Carro::Carro() {

}
void Carro::setDatos(string brand, int placas, string col) {
	marca = brand;
	matricula = placas;
	color = col;
}
void Carro::getDatos() {
	cout << "Marca: " << marca << "\t" << "Matricula: " << matricula << "\t" << "Color: " << color << endl;
}
int main()
{
	Carro carro1;
	cout << carro1.getDatos("JEEP", 123456, "red");


	return 0;
}