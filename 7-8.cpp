#include<iostream>
#include<vector>
using namespace std;
int 
main()
{
	int grades;
	int i=1;
	vector<int> histogram;
	cout << "Please enter the 1 grades >>";
	do
	{
		do
		{
			i++;
			cin >> grades;
			if ((grades < 0 || grades>100) && grades != -1)
			{
				cout << "Please enter the " << i-1 << " grades again >>";
			}
			else
			cout << "Please enter the " << i << " grades >>";
		} while ((grades < 0 || grades>100)&&grades!=-1);
		if (grades==-1)
		{
		}
		else
		{
			histogram.push_back(grades);
		}
	} while (grades != -1);
	for (int i = 0; i < histogram.size(); i++)
	{
		cout << i+1 << ". ";
		cout << histogram[i] << endl;
	}
}