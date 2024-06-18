#include<iostream>
using namespace std;
int main()
{
	char c;
	int a;
	while (cin >> c)
	{
		if (c == '@')break;
		cin >> a;
		for (int i = 0; i < a; i++)
		{
			if (i == a - 1)
			{
				for (int j = 0; j < 2*a-1; j++)
				{
					cout << c;
				}
				cout << endl;
			}
			else if (i == 0)
			{
				for (int k = 0; k < a-1; k++)
				{
					cout << " " ;
				}
				cout << c << endl;
				
			}
			else
			{
				for (int k = 0; k < a-i-1 ; k++)
				{
					cout << " ";
				}
				cout << c;
				for (int j = 0; j < 2 * i-1; j++)
			    {
				   cout << " ";
			    }
				cout << c << endl;
			}
			
		}
	}
}