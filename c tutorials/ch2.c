#include<stdio.h>
#include <math.h>
int main()
{
    //decalare the variable before using it
        int a =22;
    int b=a;
    int c=b*6;
    int d=1,e;
    printf("the value of c=%d\n",c);
    /*
    int a=1,b=2;
    int sum=a+b;
    int multiply=a*b;
    */
   /*
        int b,c;
        b=c=1;
        int a=b+c;
        int power=pow(b,c);
        printf("the value of b^c or b to the power c is %d",power) ;
   */
  //positive remainder
  printf("%d \n",8%3);
  //negative remainder
  printf("%d \n",-8%3);
  printf("%f\n",2.0*2);
  //to store only integer value 
  int m=(int) 1.9999999;
  printf("%d\n",m);
  //associativity(for same precedence)left to right (((4*3)/6)*2)
  int p=4*3/6*2;
  printf("%d \n",p);
  //associativity left to right (5*(2/2)*3)
  int q=5*(2/2)*3;
  printf("%d \n",q);
  //true-1,false-2
  //not equal to
  printf("%d \n",4!=3);
  printf("%d \n",4==4);
  // logical and operator
  printf("%d \n",3>4 && 5>2);
  //logical or operator
  printf("%d \n",3>4 || 2>5);
  //logical not operator
  printf("%d \n",!(3>4) );
    int mx=1;
    int n=4;
    //a=a+b
    mx+=n;
    printf("%d \n",mx);
    int num;
    printf("Enter a num \n");
    scanf("%d",&num);
    printf("%d \n", num % 2== 0); 
    printf("%d \n",num>9 && num<100);
    int isSunday = 0;
    int isSnowing=1;
    printf("%d \n",isSunday && isSnowing);  
    return 0; 
}