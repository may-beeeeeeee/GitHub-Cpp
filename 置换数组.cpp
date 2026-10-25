#include <iostream>
using namespace std;
int main()
{
	int arr[5];
	for (int i = 0; i <= 4; i++)
	{
		cin >> arr[i];
	 } 
	int n;
	n = arr[0];
	arr[0] = arr[4];
	arr[4] = n;	
	n = arr[1];
	arr[1] = arr[3];
	arr[3] = n;	
	for (int i = 0; i <= 4; i++)
	{
		cout << arr[i];
	 } 
	return 0;
}
