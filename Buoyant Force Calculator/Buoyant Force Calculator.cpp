#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	//Bouyant force calculation

	double Pfluid = 1000; // Density of the fluid in kg/m^3 (Water)
	double Vobject; //Volume of the object in m^3
	double Wobject; //Weight of the object in Newtons
	double G = 9.81; // Gravitational acceleration in m/s^2

	cout << "Enter the volume of the object in cubic meters (m^3): " << endl;
	cin >> Vobject;
	cout << "Enter the weight of the object in Newtons (N): " << endl;
	cin >> Wobject;

	double Fbuoyant = Pfluid * Vobject * G; // Buoyant force in Newtons

	cout << "Buoyant Force acting on the object is: " << Fbuoyant << " N " << endl;

	// Nutrally buoyant condition
	if (fabs(Fbuoyant - Wobject) < 1e-6)
		cout << "The object is neutrally buoyant." << endl;
	else if (Fbuoyant > Wobject)
		cout << "The object will float." << endl;
	else
		cout << "The object will sink." << endl;

	return 0;

}
