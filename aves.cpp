#include <iostream> // (Grants access to certain basic functions like CIN and COUT)
#define PI 3.14 // (An example of a macro)
using namespace std; // (Use standard library)

class transportmethod {
private:
	string brand;
	string fuel;
public:
	transportmethod(string _brand, string _fuel);
	void showTpMethodData();
};

transportmethod::transportmethod(string _brand, string _fuel) {
	brand = _brand;
	fuel = _fuel;
};
void transportmethod::showTpMethodData() {
	cout << "Brand: " << brand << endl;
	cout << "Fuel: " << fuel << endl;
}
/*------------------------------------------------------------------------------------------------------------------------------*/
class motorcycle : public transportmethod {
private:
	string plates;
public:
	motorcycle(string _brand, string _fuel, string _plates);
	void showMotorcycleData();
};

motorcycle::motorcycle(string _brand, string _fuel, string _plates):transportmethod(_brand, _fuel) {
	plates = _plates;
}
void motorcycle::showMotorcycleData() {
	showTpMethodData();
	cout << "Plates: " << plates << endl;
}
/*---------------------------------------------------------------------------------------------------------------------------*/

class moped : public motorcycle {
private:
	string whoknows;
public:
	moped(string _brand, string _fuel, string _plates, string _whoknows);
	void showMopedData();
};

moped::moped(string _brand, string _fuel, string _plates, string _whoknows):motorcycle(_brand, _fuel, _plates) {
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

car::car(string _brand, string _fuel, string _type):transportmethod(_brand, _fuel) {
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