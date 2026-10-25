#include<iostream>
using namespace std;
int main()
{
	int YEAR;
	cin>>YEAR;
	if(YEAR%400==0)
	{
		cout<<"1"<<endl;
	}
	else if(YEAR%4==0&&YEAR%100!=0)
	{
		cout<<"1"<<endl;
	}
	else
	{
		cout<<"0"<<endl;
	}
	return 0;
}
