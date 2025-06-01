#include<stdio.h>
#include<conio.h>
void name();
int main()
{
    loop1();
    name();
    loop2();
    return 0;
}
void name()
{
    printf(" \n Rabin Haldukhal \n");
}
void loop1()
{
    int i;
    for(i=1;i<10;i++){
        printf("*");
        
    }
}
void loop2()
{
    int i;
    for(i=1;i<10;i++){
        printf("*");
    }
}