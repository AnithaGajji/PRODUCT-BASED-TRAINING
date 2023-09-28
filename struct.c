#include<stdio.h>
struct a
{
	char x;
	double y;
	double z;
};
int main()
{
	struct a yes;
	printf("%d",sizeof(yes));
	return 0;
}