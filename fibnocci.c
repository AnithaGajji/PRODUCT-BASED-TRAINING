#include<stdio.h>
int main()
{
	int t,i;
	int f(int);
	printf("enter terms:");
	scanf("%d",&t);
	printf("fib ser \n");
	for(i=0;i<t;i++)
	{
		printf("%d",f(i));
	}
}
int f(int n)
{
	if(n<2)
	return n;
	else
	return f(n-1)+f(n-2);
}