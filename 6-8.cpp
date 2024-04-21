#include<iostream>
#include<cstdlib>
using namespace std;
class Money
{
public:
	double monetary_amount();
private:
	double cents;
	double dollars;
};
int
main()
{
	Money monetary_amount;
	double Money;
	Money = monetary_amount.monetary_amount();
	cout << "You have " << Money << " dollars now." << endl;
	system("pause");
	return 0;
}
double Money::monetary_amount()
{
	double money;
	cout << "How many cents do you have ?" << endl;
	cin >> cents;
	cout << "How many dollars do you have ?" << endl;
	cin >> dollars;
	money = dollars + (cents * 0.1);
	return money;
}
