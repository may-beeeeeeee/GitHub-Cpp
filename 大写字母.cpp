#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	char c;
	scanf("%d %c",&n,&c);
	int i=c+n;
	int j=(i-65)%26;
	int y=j+65;
	printf("%c",y);
	return 0;
}
