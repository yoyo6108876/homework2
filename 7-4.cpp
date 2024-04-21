#include<iostream>
using namespace std;
class HotDogStand
{
public:
	HotDogStand(double standIDvalue,int	sellnumbervalue);
	HotDogStand();
	void JustSold();
	int tatal();
	void totaloutput();
	double GetId();
private:
	double standID;
	int sellnumber;
	int total=0;
};
int 
main()
{
	HotDogStand stand1(100, 0),stand2(101,0),stand3(102,0);
	stand1.JustSold();
	stand1.JustSold();
	stand1.JustSold();

	stand2.JustSold();
	stand2.JustSold();

	stand3.JustSold();


	cout << "The stand " << stand1.GetId()<<" sold "<< stand1.tatal()<<endl;
	cout << "The stand " << stand2.GetId() << " sold " << stand2.tatal() << endl;
	cout << "The stand " << stand3.GetId() << " sold " << stand3.tatal() << endl;
}
double HotDogStand::GetId()
{
	return standID;
}
void HotDogStand::JustSold()
{
	total += 1;
}
int HotDogStand::tatal()
{
	return total;
}
void HotDogStand::totaloutput()
{
	cout << "The " << standID << " sold out " << total << " hot dog." << endl;
}
HotDogStand::HotDogStand(double standIDvalue, int	sellnumbervalue):standID(standIDvalue),sellnumber(sellnumbervalue)
{
}
HotDogStand::HotDogStand():standID(1), sellnumber(1)
{
}