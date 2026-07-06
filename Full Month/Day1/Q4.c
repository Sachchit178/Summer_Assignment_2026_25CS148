#include<stdio.h>
int main (){
    //WAP to count the number of digits in a number n.
    int n,count=0;
    printf("enter a number n:");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
printf("total digits=%d",count);
return 0;
}