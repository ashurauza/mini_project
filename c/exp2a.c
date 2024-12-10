#include<stdio.h>
int main(){
   float C,F;
    printf("Enter the temperature in Celsius:");
    scanf("%f",&C);
    F=(((C*9/5)) + 32);
    printf("%.3f Centigrade is equal to %.3f Fahrenheit.\n",C,F);
    printf("the temperatre in fahrenheit: %f \n",F);
    int a,b;
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na=%d and b=%d\n",a,b);
    if(a==b){
        printf("both numbers are equal");
    }
    else{ 
        printf("not equal\n");

     }
     int l,m,n;
     printf("enter value of a:  ");
     scanf("%d",&l);
     printf("enter value of b: ");
     scanf("%d",&m);
     n=l;
     l=m;
     m=n;
     printf("After swapping,the value of a is %d and the value of b is %d\n",l,m);
     int c;
     printf("enter third number :");
     scanf("%d",&c);
     if(a>b && a>c){
        printf("a is the largest number");}
     
     else if (b>a && b>c) { 
        printf("b is the largest number");}
    
     else  { printf("c is the largest number");}
     int num1,num2;
     printf("enter first number:");
     scanf("%d",&num1);
        printf("enter second number:");
     scanf("%d",&num2);
     if(num1==num2){
      printf("two numbers are equal.");
    }
       else{
         printf("two numbers are not equal.");
       }
       int x,y,z;
       printf("Enter three numbers: ");
       scanf("%d%d%d",&x,&y,&z);
       if (x>y && x>z){
         printf("\n%d is the greatest number.",x);
       }else if (y>x && y>z){
         printf("\n%d is the greatest number.",y);}
         else{
         printf("\n%d is the greatest number.",z);
       }
        return 0;
}