#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    int marks[1000];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
    float avg;
    int sum=0;
    for(i=0;i<n;i++){
        sum+=marks[i];
        }

     avg=sum/n;
     printf("average marks of class:%f",avg);  
    
    
    
    return 0;
}