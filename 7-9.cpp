#include<iostream>
#include<vector>
#include<string>
#include<math.h>
using namespace std;
class ZIPCODE
{
public:
	ZIPCODE(int zipcode) :intzip(zipcode)
	{ 
		changestobarcode();
	}
	ZIPCODE(string zipcode1): barcode(zipcode1)
	{
		changestozipcode();
	}
	ZIPCODE();
	string GetBar()
	{
		return barcode;
	}
	int Getcode()
	{
		return intzip;
	}
private:
	string barcode;
	int  intzip;
	void changestobarcode();
	void changestozipcode();
};
void ZIPCODE::changestobarcode()
{
	barcode+="1";
	int value[5] = { 7,4,2,1,0 };
	int temp;
	for (int i = 5; i > 0; i--)
	{
		int count = 0;
		temp = int (intzip / pow(10, i - 1)) % 10;
		if (temp==0)
		{	
			barcode += "11000";
		}
		else
		{
			for (int i = 0; i < 5; i++)
			{
				if (temp > value[i] && count < 2)
				{
					barcode += "1";
					count++;
				}
				else
				{
					barcode += "0";
				}
			}
		}
	}
	barcode += "1";
}
void ZIPCODE::changestozipcode()
{
	intzip = 0;
	int value[5] = { 7,4,2,1,0 };
	int postpond = 5;
	int codetotalsum = 0;
	int j = 1;
	int code[5];
	for (int i = 0; i < 5; i++)
	{	
		int codedigitsum=0;
		int count = 0;
		for ( j ; j < postpond + 1; j++)
		{
			if (barcode[j]=='1')
			{
				codedigitsum += value[count];
				count++;
			}
			else
			{
				codedigitsum += 0;
				count++;
			}
		}
		if (codedigitsum==11)
		{
			codedigitsum = 0;
		}
		code[i]= codedigitsum;
		postpond += 5;
	}
	int k = 0;
	for (int i = 5; i > 0; i--)
	{
		
		intzip = intzip+(code[k] * pow(10, i-1));
		k++;
	}
}
int
main()
{
	ZIPCODE zip1(99504), zip2("110100101000101011000010011");
	cout << "ZIP 1 :" << endl
		<< "zip 1 code : " << zip1.Getcode() << endl
		<< "zip 1 barcode : " << zip1.GetBar() << endl;
	cout << "ZIP 2 :" << endl
		<< "zip 2 code : " << zip2.Getcode() << endl
		<< "zip 2 barcode : " << zip2.GetBar() << endl;
}