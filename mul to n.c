#include<stdio.h>
#include<conio.h>
int main()
{
  
    int i,j;
   int a;
   printf("enter a num:");
   scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=a;j++)
        {printf("%d*%d = %2d   ",j,i,j*i);} 
        printf("\n");
        

    }

    return 0;
}