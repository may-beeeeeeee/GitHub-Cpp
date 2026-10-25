#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char c[8];
	for(i=65;i<91;i++)
	{
		itoa(i,c,2);
		printf("%c:%d  %o  %x  %s\n",i,i,i,i,c);
	}
}
