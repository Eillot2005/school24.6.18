#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string s;
	double sum=0;
	while (cin>>s)
	{
		if (s[0]== '\n')break;
		double a, b;
		cin >> a >> b;
		sum += a * b;
	}
	cout << fixed << setprecision(2) << ((int)(sum * pow(10, 2) + 5) / pow(10, 2));
}
