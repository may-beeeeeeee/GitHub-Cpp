#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	float p,S,t;
	p=(a+b+c)/2;
	t=p*(p-a)*(p-b)*(p-c);
	S=sqrt(t);
	printf("%.1f\n",S);
	return 0;
}
