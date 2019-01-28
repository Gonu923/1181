#include<stdio.h>
int fact(int f2);
int main(){
    while(EOF){
        int num,num2, i;
        long long int f=1,f2, sum=0;
        scanf("%d %d",&num, &num2);
        for(i = 1; i <= num; i++){
            f *= i;
        }
        f2 = fact(num2);
        sum = f+f2;
        printf("%lld\n", sum);
    }
    return 0;
}
int fact(int num2){
    int i;
    long long int f2=1;
    for(i = 1; i<=num2;i++){
        f2 *= i;
    }
    return f2;
}
