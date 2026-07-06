#include<stdio.h>
#include<math.h>
int main (){
    //WAP to check armstrong number.
    int n,original,remainder,result=0,digits=0;
    printf("enter a number:");
    scanf("%d",&n);
    original=n;
    // count digits.
    while(original!=0){
        original/=10;
        digits++;
    }
    original=n;
    while(original!=0){
        remainder=original%10;
        result+= pow(remainder,digits);
        original=original/10;
    }
    if(result==n){
        printf("%d is an armstrong number.",n);
    }
    else{
        printf("%d is not an armstrong number.",n);
    }
    return 0;
}