#include<stdio.h>
#include<conio.h>
int main()
{
    int a,dig,sum=0;
    printf("enter a num :");
    scanf("%d",&a);
      while(a != 0) 
      {
        dig = a % 10;
        sum=sum+dig;
        a=a/10; 
    }
 printf("%d",sum);
    

    return 0;
}