#include<stdio.h>
int sub(int d, int e);
int main(){
    int a, b, c, d, e;
    int result;
    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);
    result = a*b*c+sub(d,e);
    printf("%d",result);
}
int sub(int d,int e){
    int r = d-e;
    return r;
}
