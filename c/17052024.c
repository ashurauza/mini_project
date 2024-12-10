#include<stdio.h>
int main(){
int p,c,m;
printf("Enter the marks of Physics:");
scanf("%d",&p);
printf("Enter the marks of Chemistry:");
scanf("%d",&c);
printf("Enter the marks of Mathematics:");
scanf("%d",&m);
if(p>40 && c>50){
    if (m>60 && (p+m)>150){
        printf("eligible for the course\n");
    }
    else if((p+c+m)>200){ 
        printf("eligible for the course");

    }
}
else{ 
    printf("not eligible for the course");
}
int a,x,b,n;
float y;
printf("Enter the value of a,x,b and n :");
scanf("%d%d%d%d",&a,&x,&b,&n);
switch (n)
{
    case 1:
    y=(a*x)%b;
    printf("y:%f",y);
    break;

    case 2:
    y=(a*x*x)+(b*b);
    printf("y:%f",y);
    break;
    case 3:
    y=(a)-(b*x);
    printf("y:%f",y);
    break;
    case 4:
    y=a+(x/b);
    printf("y:%f",y);
    break;
    }
return 0;
}