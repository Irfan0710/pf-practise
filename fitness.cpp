#include <iostream>
using namespace std;
int main()
{
    int day[6],avg,total;
    for (int i=0;i<7;i++)
    {
    cout<<"Enter How many steps you walked on day "<<i+1<<":";
    cin>>day[i];
    if (day[i]<1000)
    {
    	cout<<"Be consistent!You're going below avg..\n";
	}
    total=total+day[i];
    }
    avg=total/7;
    cout<<"You walked "<<total<<" steps.\n"<<"With an avg of "<<avg<<" steps per day.";
}
