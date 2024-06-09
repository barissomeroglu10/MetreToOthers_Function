/*
In this code, we will get length from user as metre and will convert to this length to centimetre and kilometre.

Developer: Barış Someroğlu
Date: 25.03.2024 / 11:30 pm
*/

#include <iostream>

using namespace std;

double MetreToCentiMetre(double);
double MetreToKiloMetre(double);
void Result(double);

int main()
{
	double Metre;

	cout << "Please Enter Length: ";
	cin >> Metre;

	cout << "\n";

	Result(Metre);

	/* 
	
	double toCm = MetreToCentiMetre(Metre);
	cout << Metre << "m = " << toCm << "cm" << endl;

	double toKm = MetreToKiloMetre(Metre);
	cout << Metre << "m = " << toKm << "km" << endl;

	cout << "\n"; 
	
	*/

	return 0;
}

double MetreToCentiMetre(double Metre)
{
	// 1 m = 100 cm
	double CentiMetre = Metre * 100;

	return CentiMetre;
}

double MetreToKiloMetre(double Metre)
{
	// 1 km = 1000 m 
	double KiloMetre = Metre / 1000;

	return KiloMetre;
}

void Result(double Metre)
{
	cout << Metre << "m = " << MetreToCentiMetre(Metre) << "cm" << endl;

	cout << Metre << "m = " << MetreToKiloMetre(Metre) << "km" << endl;
}
