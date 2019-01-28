#include<stdio.h>
int main(){
    int N[20];
    int i = 0, j = 19, temp,a;
    for(a = 0; a<20;a++){
        scanf("%d",&N[a]);
    }
    while(j>=0){
        i++;
        j--;
        temp = N[i];
        N[i] = N[j];
        N[j] = temp;
        printf("N[%d]\n",N[i]);
    }
}
