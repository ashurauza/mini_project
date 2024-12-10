#include<stdio.h>
int main(){
    int f;
    float b=10.5;
    f=(int)b;
    printf("%d\n",f);
    int m=10;
    float o,n=10.5;
    o=m+n;
    printf("%f\n",o);
    int x=72;
    char a;
    a='B';
    printf("%c\n",a);
    printf("%d\n",a);
    printf("%c\n",x);
    int s;
    char t;
    printf("%d\n",sizeof(s) );
    printf("%d\n",sizeof(t) );
    printf("%d\n",sizeof(double) );
    int g,h,i;
    h=10;
    i=20;
    g=10;
    g=h+i;
    g=20;
    printf("g=%d\n",g);
    g=((10,h+i),20);
    printf("g=%d\n",g);


        return 0;
}