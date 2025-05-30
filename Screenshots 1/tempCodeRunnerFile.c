#include<stdio.h>
#include<conio.h>
int main()
{
    int a,dig,sum=0,p;
    printf("enter a num :");
    scanf("%d",&a);
p=a;
      while(a != 0) 
      {
        dig = a % 10;
        
        sum=sum+(dig*dig*dig);

        a=a/10; 
       
    }
     if(sum == p){
       printf("%d is armstrong num",p);

     }
     else {
       printf("%d is  not an armstrong num",p);
     }

    

    return 0;
}