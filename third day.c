#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,add,sub,mul,div;
    char operator;
   
    printf("enter an operator (+,-,*,/) \n ");
    scanf("%c",operator);
     printf("enter the vlaue of two numbers:");
    scanf("%d%d",&a,&b);
   
        switch (operator){
            case '+':
             pirntf("addition of %d and %d is = %d",a,b,a+b);
             break;
             case '-':
             pirntf("subtraction of %d and %d is = %d",a,b,a-b);
             break;
             case '*':
              pirntf("multiplication of %d and %d is = %d",a,b,a*b);
             break;  
             case '/':
             if (b !=0)
             pirntf("division of %d and %d is = %d",a,b,a/b);
             else
             {
                printf("the divisor must be greater than zero");
                return 1;
             }
             break;
        default:
        printf("ERRORRRRRR");
        }
       
        
       
        


}