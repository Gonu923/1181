#include<stdio.h>
int sub(int a,int t);
int mul(int u,int t);
int add(int num1,int num2);
int main()
{
  int u,t,a,result;
  int num1,num2,sum;
  scanf("%d %d %d %d %d",&u,&t,&a,&num1,&num2);
  result =mul(u,t)+sub(a,t);
  sum=add(num1,num2);
  printf("Today we are go: %d meter\n",result);
  printf("the sum is:%d",sum);
  return 0;
}
int mul(int u, int t){
    int s = u*t;
    return s;
}
int sub(int a,int t)
{
    int r = 0.5*a*t*t;
    return r;
}
int add(int num1,int num2)
{
 int r=num1+num2;
 return r;
}
