#include<stdio.h>
int main(){
    float bs,da,hra,gs,pf,ns;
    scanf("%f",&bs);
    da=bs*25/100;
    hra=bs*15/100;
    gs=bs+da+hra;
    pf=gs*10/100;
    ns=gs-pf;
    printf("Net Salary:%f\n",ns);
    int a;
     printf("enter a number:");
     scanf("%d",&a);
     (a%2==0)?(printf("number is even\n")):(printf("number is odd\n")); 
     int year;
     printf("enter the year");
      scanf("%d",&year);
      if((year%4==0 && year%100!=0)||(year%400==0)){
        printf("%d is a leap year\n",year);
      }
      else{printf("%d is not a leap year\n",year);
      }

    return 0;
}
   