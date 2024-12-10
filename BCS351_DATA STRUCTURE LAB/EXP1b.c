#include<stdio.h>
int main(){
    int n;
    printf("Enter  the number of students:");
    scanf("%d",&n);
    int num[1000];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int max=0;
    for(i=0;i<n;i++){
        if(num[i]>max){ 
            max=num[i];
        }
    }
     printf("The largest number:%d",max);
    return max;
}