#include <iostream>
using namespace std;
int n;
string sum,num;
int main()
{
	cin >> sum;
	int len = sum.length();
	for (int i = 0; i < len; i++)
	{
		if((sum[i] > 47 && sum[i] < 58) || (sum[i] > 96 && sum[i] < 123) || (sum[i] > 64 && sum[i] < 91))
		{
			if (sum[i] > 64 && sum[i] < 91)
			{
				sum[i] += 32;
			}
			num[n] = sum[i];
			n++;
		}
	}
	for (int i = 0;i < n; i++)
	{
		cout << num[i];
	}
	return 0;
}
