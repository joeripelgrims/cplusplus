#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Contactos {
private:
	string nombre;
	string telefono;
	string passw;
public:
	Contactos();
	void setContacto(string n_contacto, string t_contacto);
	string getContactoN();
	string getContactoT();
	void capturarPassw();
	void mostrarPassw();
};

Contactos::Contactos() {

}
void Contactos::setContacto(string n_contacto, string t_contacto) {
	nombre = n_contacto;
	telefono = t_contacto;
}
string Contactos::getContactoN() {
	return nombre;
}
string Contactos::getContactoT() {
	return telefono;
}
void Contactos::capturarPassw() {
	cout << "Enter your new password: " << endl;
	cin >> passw;
}
void Contactos::mostrarPassw() {
	cout << passw;
}

int main()
{
	Contactos contacto1;
	Contactos contacto2;
	contacto1.setContacto("Joeri", "6643560186");
	contacto2.setContacto("Martha", "6643590932");
	cout << "Number: " << contacto1.getContactoN() << ", " << "Telnr: " << contacto1.getContactoT() << ", " << "Password: " << endl;
	cout << "Number: " << contacto2.getContactoN() << ", " << "Telnr: " << contacto2.getContactoT() << ", " << "Password: " << endl;

	

	return 0;
}