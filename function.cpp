#include<stdio.h>
int add(int a,int b);
int main()
{
    int num1,num2,r;
    printf("Enter a number:");
    scanf("%d %d",&num1,&num2);
    r=add(num1,num2);
    printf("the result is:%d\n",r);
    return 0;
}
int add(int a, int b){
   int sum;
   sum=a+b;
   return sum;
}
