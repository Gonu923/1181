#include<stdio.h>
int main(){
    int x,y,i,j;
    long int F=1, f2 = 1,s=0;
    scanf("%d %d",&x,&y);
    for(i = 1, j = 1; i <=x , j <= y; ++i, ++j){
        F*=i;
        f2*=j;
        s=F+f2;
    }

    printf("%ld\n",s);

    return 0;
}
