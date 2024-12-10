#include<stdio.h>
#include<conio.h>
int main()
{ 
    int S1,S2,S3,S4,S5;
    int sum;
    float percentage;
    printf("ENTER THE MARKS OF MATHEMATICS\n");
    scanf("%d",&S1);
    printf("ENTER THE MARKS OF PHYSICS\n");
    scanf("%d",&S2);
    printf("ENTER THE MARKS OF CHEMISTRY\n");
    scanf("%d",&S3);
    printf("ENTER THE MARKS OF ENGLISH\n");
    scanf("%d",&S4);
    printf("ENTER THE MARKS OF HINDI\n");
    scanf("%d",&S5);
    sum=S1+S2+S3+S4+S5;
    percentage= (float) (sum/500.0)*100;
    printf("SUM=%d\n",sum);
      //percentage= (float) (sum/5);
    printf("PERCENTAGE:%f",percentage);
    return (0);
}