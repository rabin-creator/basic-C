#include<stdio.h>
#include<conio.h>

int main() {
    int a, b;
    char operator,ch;

    printf("\n Enter the value of two numbers:\n ");
    scanf("%d%d",&a,&b);                                      // bg noise ok
    printf("\n Enter an operator (+, -, *, /): ");
   operator=getche(); 

do{
    
   


     switch (operator) {
        case '+':
            printf("\nAddition of %d and %d is = %d\n", a, b, a + b);
            break;
        case '-':
            printf("\nSubtraction of %d and %d is = %d\n", a, b, a - b);
            break;
        case '*':
            printf("\nMultiplication of %d and %d is = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0)
                printf("\nDivision of %d and %d is = %.2f\n", a, b, (float)a / b);
            else {
                printf("\nThe divisor must be greater than zero.\n");
                return 1;
            }
            break;
        default:
            printf("\nERROR: Invalid operator!   \n");
    }

    printf("wanna do more operation on it Y or N:");
    ch=getche();

    if(ch == 'Y')
    {
         printf("\n Enter the value of two numbers:\n ");
    scanf("%d%d",&a,&b);        
    }
    
}while (ch == 'Y'); 
}



