#include<stdio.h>
#include<math.h>
int main(){/* 
    int a,b,c,n,i;
    a=0;
    b=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for(i=0;i<=n-2;i++){
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }




*/
int i,f,n,x;
float sum =0;
printf("Enter the value of n and x:");
scanf("%d%d",&n,&x);
f=1;
for(i=0;i<n;i++){
f=f*i;
sum=sum+(pow(-1,i)*pow(x,i))/f;
printf("%f",sum);
}



    return 0;
}