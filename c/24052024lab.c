/*#include<stdio.h>
int main ()
{
    for(int i=3;i>0;i--)
    {
        for(int j=i;j>0;j--){
        printf("%d",j);} printf("\n");
    } 
    


    return 0;
}*/
#include<stdio.h>
#include<conio.h>
void add();
void main()
{
    add();
    getch();
}
void add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
        c=a+b;
        printf("sum=%d",c);
}