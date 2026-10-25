#include <iostream>
using namespace std;
int main()
{
	int n;
	int num = 1;
	cin >> n;
	for (int i = n; i >= 1;i--)
	{
		for (int j = 1;j <= i; j++)
		{
			cout << "  ";
		}
		for (int j = 1; j <= n+1-i; j++)
		{
			if (num <= 9)
			{
				cout << "0" << num;
			}
			else
			{
				cout << num;
			}
			num += 1;
		}
		cout << endl;
	}
	return 0;
}
