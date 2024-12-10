#include<stdio.h>
int main(){
    int num,n,a,b,c,d,sum,rev;
    printf("Enter a 4 digit number");
    scanf("%d",&num);
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    sum=a+b+c+d;
    printf("sum =%d\n",sum);
    printf("%d%d%d%d",a,b,c,d);
    rev=a*1000+b*100+c*10+d*1;
    n=d*1000+c*100+b*10+a*1;
    printf("\nreverse number is %d",rev);
    if(rev==n){
        printf("\nnumber is palindrome");
    }
    else{printf("\nnumber is not a palindrome");
    }
    printf("\nenter a new number ");
    int new_num;
    scanf("%d",&new_num);
    (new_num>n)?printf("\n%d is greater than %d ",new_num,n):printf("\n%d is not more than %d ",new_num,n);
    return 0;
}
