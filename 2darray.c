#include<stdio.h>
#include<conio.h>
int main()
{
   //////////////////////////////////////////////   ok  row = col ok
     int n,i,j,m;
    printf("eneter the value of n and m: \n");
    scanf("%d%d",&n,&m);  
    int a[n][m];
    int b[n][m];
    printf("enter the elementss of the array 1 :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
scanf("%d",&a[i][j]);
        }


    }
printf("enter the elementss of the array 2 :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
scanf("%d",&b[i][j]);
        }


    }
  
  
printf("the sum is :");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++) 
        {
 printf("%d  ", a[i][j]+ b[i][j]);
        }
  

    }
    
return 0;
}