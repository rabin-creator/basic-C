#include<stdio.h>
#include<conio.h>
int main()
{
   
     int n,i,j;
    printf("eneter the value of n: \n");
    scanf("%d",&n);  
    int a[n];
    int b[n];
    printf("enter the elementss of the array 1 :\n");
    for(i=0;i<n;i++)
    {
scanf("%d",&a[i]);

    }
    
     printf("enter the elementss of the array 2 :\n");
    for(j=0;j<n;j++)
    {
scanf("%d",&b[j]);

    }
  
printf("the sum is :");
    for(i=0;i<n;i++)
    {
   printf("%d", a[i] + b[i]);

    }
    
return 0;
}