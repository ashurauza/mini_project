#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=7;i++)
    { if (i<=4){
        for(j=1;j<=4-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("*");
        }
        printf("\n");

    }
      else{  
    for (j=1;j<=6-i;j++)
    {
        printf(" ");
    }
    for(j=1;j<=5;j++)
    {
        printf("*");
    } printf("\n");

      }

    
    }
return 0;
}