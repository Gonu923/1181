#include<stdio.h>
int main(){
    int input[1];
    int i, sum = 0, n;
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
       scanf("&d",&input[i]);
       sum = sum + input[i];
    }
    printf("Answer is: %d \n",sum);
    return 0;
}
