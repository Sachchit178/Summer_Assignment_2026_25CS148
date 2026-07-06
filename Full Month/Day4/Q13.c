#include<stdio.h>
int main (){
    int n, a=0,b=1,next;
    printf("enter number of terms:");
    scanf("%d",&n);
    printf("fibonacci series:");
    printf("%d %d ",a,b);
    for(int i=2;i<n;++i){
        next=a+b;
        printf("%d ",next);
        a=b;
        b=next;
    }
    return 0;
}