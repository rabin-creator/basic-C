#include<stdio.h>
#include<conio.h>
int main()
{
     int i;
    int num,sum;
    printf("enter num:");
    scanf("%d",&num);

  while (num<=100) {  
    if(num % 5 == 0)
  { 
    printf("%d \t",num);
  }
   num = num+1;
      } 
   
        return 0;

    }
   



// wap to find num. exactly divisible by 5 betn 1-100 using while loop
