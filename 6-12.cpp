#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class BoxOfProduce
{
public:
	void input_item(string[]);
	void ouput();
	void IfTheSame(string[]);
private:
	string item[3];
};
int
main()
{
	srand(time(NULL));
	BoxOfProduce box;
	int i = 0;
	ifstream produce;
	produce.open("list.txt");
	string total_itemc[5];
	do
	{
		produce >> total_itemc[i];
		i++;
	} while (i<5);
	box.input_item(total_itemc);
	box.ouput();
	box.IfTheSame(total_itemc);
}
void BoxOfProduce::input_item(string total_itemc[5])
{
	for (int i = 0; i < 3; i++)
	{
		item[i] = total_itemc[rand() % 5];
	}
}

void BoxOfProduce::ouput()
{
	for (int i = 0; i < 3; i++)
	{
		cout << item[i] << endl;
	}
}
void BoxOfProduce::IfTheSame(string total_itemc[5])
{
	string change_item;
	bool check=false;
	if ((item[0].compare(item[1]))==0 && (item[1].compare(item[2]))==0)
	{
		cout << "Whitch item you want you choose to change ?" << endl;
		do
		{
			cin >> change_item;
			for (int i = 0; i < 5; i++)
			{
				if (change_item.compare(total_itemc[i])==0)
				{
					item[2] = change_item;
					check = true;
				}
			}
		} while (!check);
		ouput();
	}
}
