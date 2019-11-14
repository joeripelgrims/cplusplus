#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class persona {
private:
	string edad;
	string nombre;
public:
	persona(string _edad, string _nombre);
	void mostrarPersona();
};

persona::persona(string _edad, string _nombre) {
	edad = _edad;
	nombre = _nombre;
};
void persona::mostrarPersona() {
	cout << "Edad: " << edad << endl;
	cout << "Nombre: " << nombre << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
class empleado : public persona {
private:
	string num_empleado;
public:
	empleado(string _edad, string _nombre, string _num_empleado);
	void mostrarEmpleado();
};

empleado::empleado(string _edad, string _nombre, string _num_empleado) :persona(_edad, _nombre) {
	num_empleado = _num_empleado;
}
void empleado::mostrarEmpleado() {
	mostrarPersona();
	cout << "Num_empleado: " << num_empleado << endl;
}
/*---------------------------------------------------------------------------------------------------------------------------*/

class estudiante : public persona {
private:
	string promedio_final;
public:
	estudiante(string _brand, string _fuel, string _plates, string _whoknows);
	void showMopedData();
};

moped::moped(string _brand, string _fuel, string _plates, string _whoknows) :motorcycle(_brand, _fuel, _plates) {
	whoknows = _whoknows;
}
void moped::showMopedData() {
	showMotorcycleData();
	cout << "Who knows: " << whoknows << endl;
}
/*--------------------------------------------------------------------------------------------------------------------------*/

class car : public transportmethod {
private:
	string type;
public:
	car(string _brand, string _fuel, string _plates);
	void showCarData();
};

car::car(string _brand, string _fuel, string _type) :transportmethod(_brand, _fuel) {
	type = _type;
}
void car::showCarData() {
	showTpMethodData();
	cout << "Type: " << type << endl;
}



int main()
{
	car beetle("Volkswagen", "Gasoline", "Compact");
	beetle.showCarData();
	motorcycle virago("Yamaha", "Gasoline", "Fine");
	virago.showMotorcycleData();

	return 0;
}