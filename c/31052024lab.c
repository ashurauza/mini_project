#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=9;i++)
    { if (i<=5){
        for(j=1;j<=i-1;j++)
        {
            printf(" ");
        }
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");

    }
      else{  
    for (j=1;j<=9-i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=i-4;j++)
    {
        printf("*");
    } printf("\n");

      }

    
    }
return 0;
}