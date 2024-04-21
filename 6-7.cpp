#include<iostream>
using namespace std;
class pizza
{
public:
	char type;
	char size;
	int pepperoni;
	int cheese;
	void outputDescription(char, char, int,int);
	int computePrice(char, char, int,int);
};
int 
main()
{
	pizza one;
	cout << "Which type of pizza do you want deep dish(d), hand tossed(h), or pan(p)" << endl;
	do
	{
		cin >> one.type;
	} while (one.type!='h'&&one.type != 'p' && one.type != 'd');
	cout << "Which size of pizza do you want small(s), medium(m), or large(l)" << endl;
	do
	{
		cin >> one.size;
	} while (one.size != 's' && one.size != 'm' && one.size != 'l');
	cout << "How much pepperoni do you want?" << endl;
	cin >> one.pepperoni;
	cout << "How much cheese do you want?" << endl;
	cin >> one.cheese;
	one.outputDescription(one.type, one.size, one.pepperoni,one.cheese);
	int money=one.computePrice(one.type, one.size, one.pepperoni, one.cheese);
	cout << money;
	return 0;
}
void pizza::outputDescription(char type, char size, int pepperoni, int cheese)
{
	switch (size)
	{
		case 's':
			cout << "The small ";
			break;
		case 'm':
			cout << "The medium ";
			break;
		case 'l':
			cout << "The large ";
			break;
	default:
		break;
	}
	switch (type)
	{
	case 'h':
		cout << "hand tossed";
	case 'd':
		cout << "deep dish";
	case 'p':
		cout << "pan";
	default:
		break;
	}
	cout << " pizza with " << pepperoni << " pepperoni and " << cheese << " cheese is ";
}
int pizza::computePrice(char type, char size, int pepperoni, int cheese)
{
	int pizza_money;
	int toppings;
	int total;
	switch (size)
	{
	case 's':
		pizza_money=10;
	case 'm':
		pizza_money = 14;
	case 'l':
		pizza_money = 17;
	default:
		break;
	}
	toppings = (pepperoni + cheese) * 2;
	cout << pizza_money << "+" << " 2 * " << pepperoni + cheese << "=";
	total = pizza_money + toppings;
	return total;

}