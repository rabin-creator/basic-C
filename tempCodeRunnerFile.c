#include<stdio.h>
#include<conio.h>
int main()
{
   //////////////////////////////////////////////     1st mat col = 2nd mat  row (c1==r2)    aaba ko steps bbujhai deu hai
     int r1,r2,c1,c2;
     int a[10][10], b[10][10], r[10][10];
    int i,j,k;
    printf("enter row and coolumns of matrix A: \n");
    scanf("%d%d",&r1,&c1);
    printf("enter row and coolumns of matrix B: \n");
    scanf("%d%d",&r2,&c2);
    if(c1 == r2 ){
        
  printf("enter the elementss of the mat 1 :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
printf("enter the elementss of the mat 2 :\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2  ; j++) {
            r[i][j] = 0;
            for (k = 0; k < r2 ; k++)
                r[i][j] += a[i][k] * b[k][j];
        }
    }

printf("the multiplication of matrix is  :\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
          printf("%d   ",r[i][j]);
        }
        printf("\n");
    }
    
    }
return 0;
}