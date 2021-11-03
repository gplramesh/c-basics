#include<stdio.h>
int main()
{
	int n,e,o,s;
	n=5;
	s=n*(n+1)/2;
	e=n*(n+1);
	o=n*n;
	printf("sum of %d natural number is %d\n",n,s);
	printf("sum of %d even number is %d\n",n,e);
	printf("sum of %d odd number is %d\n",n,o);
}
