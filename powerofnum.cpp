#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    int num1, num2,r,n,i,power;

    printf("Enter the first number for the range: ");
    scanf("%d",&num1); //received the number for num1
    printf("Enter the second number for the range: ");
    scanf("%d",&num2); //received the number for num2
    printf("Enter power: ");
    scanf("%d",&n);
    printf("\nDisplay the even numbers between %d and %d are: ",num1,num2);

    for(i=num1; i<=num2; i++){
        r=i%2;
        if(r==0)
            printf("\n %d",i);
    }
printf("pow(%d,%d)=%d",i,n,pow(i,n));
    
    return 0;
}