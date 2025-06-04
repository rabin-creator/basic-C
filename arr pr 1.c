#include<stdio.h>
int main()
{
    int ra[5];
    printf("enter the elements of array:");
    int i;
     int k;
     int  great;
    for(i=0;i<5;i++)     
    {
        scanf("%d",&ra[i]);
    }
great = ra[0];
for(k=0;k<5;k++)
 
{
    if(ra[k]>great)
    {
        great=ra[k];
    }

   
 }
 printf("%d is the greatest",great);

return 0;
 
}