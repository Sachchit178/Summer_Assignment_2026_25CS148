#include<stdio.h>
int main()
    {
//WAP to find factorial of a number n.
int n,fact=1;
printf("enter a number n:");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact=fact*i;
}
printf("factorial=%d",fact);
return 0;
    }