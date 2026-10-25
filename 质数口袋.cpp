#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n)
{
	if(n<=1) return false;
	if(n==2) return true;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int L;
	cin>>L;
	int sum=0,count=0;
	for(int i=2;i<=L;i++)
	{
		if(isPrime(i))
		{
			if(sum+i>L)
			{
				break;
			}
			sum+=i;
			count++;
			cout<<i<<endl;
		}
	}
	cout<<count<<endl;
	return 0;
}
