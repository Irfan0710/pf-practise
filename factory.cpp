#include <iostream>
using namespace std;
int main()
{
	int size;
	cout<<"How many workers are there? \n";
	cin>>size;
	int* array= new int[size-1];
	for (int i=0;i<=size-1;i++)
	{
		cout<<"Input your overtime hours worker "<<i+1<<":";
		cin>>array[i];
		if (array[i]>40)
		cout<<"You got a overttime of "<<array[i]*2<<"$.\n";
		else
		cout<<"Try again Next Month.\n";
	}
	cout<<"Thank you for using us.(Its not about program).";
	
}
