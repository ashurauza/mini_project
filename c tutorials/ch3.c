#include<stdio.h>
#include<math.h>
int main()
{
     int age;
printf("Enter age: \n");
scanf("%d",&age);
/*
if(age >=18)
{
    printf("adult \n ");
    printf("they can vote \n");
    printf("the can drive \n");
}
else if(age > 13  && age < 18)
{
    printf("teenager \n");
    

}
else{ 
    printf(" child \n");
    }
*/
//ternary operator (conditinal operators)
age>=18 ? printf("adult \n") : printf("not adult \n");
int day;//1-mon;2-tues;3-wed
printf("Enter day(1-7): \n");
scanf("%d",&day);
switch (day)
{
    case 1 : printf("Monday \n");
             break;
    case 2 : printf("Tuesday \n");
             break;
    case 3 : printf("Wednesday \n");
             break;
    case 4 : printf("Thursday \n");
             break;
    case 5 : printf("Friday \n");
             break;
    case 6 : printf("Saturday \n");
             break;
    case 7 : printf("Sunday \n");
             break;
    default : printf("not a valid day! \n");

}
char days;//m-mon;t-tues;w-wed;T;f;s;S
printf("Enter day(m,t,w,T,f,s,S): \n");
scanf("%s",&days);
switch (days)
{
    case 'm' : printf("Monday \n");
             break;
    case 't' : printf("Tuesday \n");
             break;
    case 'w' : printf("Wednesday \n");
             break;
    case 'T' : printf("Thursday \n");
             break;
    case 'f' : printf("Friday \n");
             break;
    case 's' : printf("Saturday \n");
             break;
    case 'S' : printf("Sunday \n");
             break;
    default : printf("not a valid day! \n");

}
int marks ;
printf("enter number(0-100) : ");
scanf("%d",&marks);
/*
if (marks>=0 && marks<= 30)
{
    printf("Fail \n");
}
else if (marks>30 && marks<=100){
    printf("Pass \n");
}
else {
    printf("wrong marks");
}
*/
//marks <=30 ? printf("Fail \n"): printf("Pass \n"); 
if(marks<30){
    printf("C \n");
}
else if(marks >= 30 && marks<70)
{
    printf("B \n");

}
else if(marks >=70 && marks<90){
    printf("A \n");
}
else{
    printf("A+ \n");
} 
 printf("thank you! \n");
 //write a program to find if a character entered by user is upper case or not .
  char ch;
  printf("enter character : \n");
  scanf("%s", &ch);
  if(ch>='A'&& ch<='Z'){
    printf("upper case\n");
  }  
else if(ch>='a' && ch<='z'){
    printf("lower case \n");
}
else{
    printf("not English letter\n");
}
//Write a program to check if a given number is Armstrong number or not.
//Write a program to check if the given number is a natural number .
    return 0;
}
