#include <iostream>
using namespace std;
int main ()
{
	int arr[10];
	for (int i = 1;i <= 7; i++)
	{
		cin >> arr[i];
	}
	for (int i = 1; i <= 7; i++)
	{
		for (int j = i; j <= 7; j++)
		{
			int n;
			if (arr[i] < arr[j])
			{
				n = arr[i];
				arr[i] = arr[j];
				arr[j] = n;
			}
		}
	}
	for (int i = 1; i <= 7; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}
