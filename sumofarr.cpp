#include<stdio.h>
int main()
{
	int arr[10],n,i,sum=0;
	void ia(int*,int);
	int soa(int*,int);
	printf("enter size :");
	scanf("%d",&n);
	printf("enter elein arr:\n");
	ia(arr,n);
	sum=soa(arr,n);
	printf("\n enter sum of elein arr:%d",sum);
}
void ia(int*a,int size )
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("enter at value at %d",i);
		scanf("%d",&a[i]);
	}
}
int soa(int *a,int size)
{
	int s=0,i;
	for(i=0;i<size;i++)
	{
    	s=s+a[i];
    }
    return s;
}