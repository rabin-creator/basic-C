#include<stdio.h>
#include<conio.h>
int main()
{
    
    int n,i;
    printf("enter the size of a array :");
    scanf("%d",&n);
    int a[n];
    printf("enter the no. of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the entered number are :  ");
    for(i=0;i<n;i++)
    {
         printf(" %d \t",a[i]);
    }
    return 0;


}