#include<stdio.h>
int main(){
    int p,c,m,e,h;
    float percentage_marks;
    int type;
    printf("Enter the marks of Physics:");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry:");
    scanf("%d",&c);
    printf("Enter the marks of Mathematics:");
    scanf("%d",&m);
    printf("Enter the marks of English:");
    scanf("%d",&e);
    printf("Enter the marks of Hindi:");
    scanf("%d",&h);
    percentage_marks=((p+c+m+e+h)/5);
    if (percentage_marks>=90 && percentage_marks<=100)
    {type=1;}
     else if (percentage_marks>=80 && percentage_marks<90)
    {type=2;}
    else if (percentage_marks>=60 && percentage_marks<80)
    {type=3;}
    else
    {type=4;}
    switch(type){
        case 1:
        printf("grade=A for %f%%",percentage_marks);
        break;
        case (2):
        printf("grade=B for %f%%",percentage_marks);
        break;
        case (3):
        printf("grade=C for %f%%",percentage_marks);
        break;
        case (4):
        printf("grade=D for %f%%",percentage_marks);
        break;
     }


     
    return 0;
}
