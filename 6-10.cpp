#include<iostream>s
using namespace std;
class Weight
{
public:
	double setWeightPounds();
	double setWeightKilograms(double);
	double setWeightOunces(double);
	
private:
	double weigh;
};
double Weight::setWeightPounds()
{
	cout << "Enter your weight >>" << endl;
	cin >> weigh;
	return weigh;
}

double Weight::setWeightKilograms(double Poundsweigh)
{
	double kilogram = Poundsweigh * 2.21;
	return kilogram;
}
double Weight::setWeightOunces(double Poundsweigh)
{
	double Ounces = Poundsweigh / 16;
	return Ounces;
}
int
main()
{
	Weight first;
	double Pounds,kilogram, Ounes;
	Pounds = first.setWeightPounds();
	kilogram = first.setWeightKilograms(Pounds);
	Ounes = first.setWeightOunces(Pounds);
	cout << "It's " << Pounds << " pounds, " << kilogram << " kilograms and " << Ounes << " ounes." << endl;
	return 0;
}