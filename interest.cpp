#include <iostream>
using namespace std;
int main ()
{
	int amm,time,interest;
	cout<<"Enter the principle Ammount:";
	cin>>amm;
	cout<<"Enter the time period(in year):";
	cin>>time;
	interest=(amm*5.5/100)*time;
	cout<<"The Amount you have to pay:"<<interest+amm;
}
