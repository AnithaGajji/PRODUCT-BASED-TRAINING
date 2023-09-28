#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[10],n,size,s,i;
    printf("Enter the size of elements");
    scanf("%d",&size);
    printf("Enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    
        printf("\n enter the search element");
        scanf("%d",&s);
        int key=1;
    
    for(i=0;i<size;i++)
    {
        if(a[i]==s){
            printf("search element is found at location %d",i);
            key=0;
            break;
        }
    }
    if(key==1)
            printf("search element not found");
}