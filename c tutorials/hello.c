# include<stdio.h>
//this code dispalys how data type works in C
/*
     This is a multiple line comment
     hcghsgsush
     ghgfysyfsfsy
     ggsyg 
*/
int main()
{ 
    int number=25;
    char star='*';
    //int age=22;
    float pi=3.14;
    //int a=30;
    //int A=40;
     //int _age=22;
     //int age=22;
     int final_price=100;
     int age;
     int a,b;
     //int sum;
     printf("enter a\n");
     scanf("%d",&a);
     printf("enter b\n");
     scanf("%d",&b);
     //sum=a+b;
     //printf("sum is :%d",sum);
     printf("sum is: %d\n",a + b);
     printf("enter age\n");
    scanf("%d",&age);
    printf("Hello world!\n");
    printf("age is %d \n", age);
    printf("the value of pi is %f \n",pi);
    printf("star character is %c \n",star);
    // area of square
    float side;
    printf("Enter side\n");
    scanf("%f",&side); 
    printf("area is : %f/n",side*side);
    //area of circle
    float radius;
    printf("Enter radius");
    scanf("%f/n",&radius);
    printf("area of circle is %f",3.14*radius*radius);
    return 0;
}