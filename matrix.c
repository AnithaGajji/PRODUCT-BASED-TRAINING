#include<stdio.h>//matrix transpose at 90 degree
int main()
{
	int arr[40][40],m,n,i,j,t[40][40],temp,a,b;
	printf("enter m:");
	scanf("%d",&m);
	printf("enter n:");
	scanf("%d",&n);
	printf("\n read i/p ele:");
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		
			 printf("ele addr",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			t[j][i]=arr[i][j];
		}
	
	}
	printf("\n the ele matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n the transpose of given matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
	printf("\n the 90 degree matrix:\n");
	temp=arr[i][j];
	arr[i][j]=t[j][i];
	t[i][j]=temp;
	i++;
	j--;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",t[j][i]);
		}
		printf("\n");
	}
	

}