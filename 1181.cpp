#include<stdio.h>
int main(){
    int row,i;
    scanf("%d",&row);
    char str[2];
    double val[12][12], sum=0.0;
    scanf("%s",&str);
    if(str[0] == 'S'){
        for(i = 0; i < 12; i++){
            scanf("%lf",&val[row][i]);
            sum = sum+val[row][i];
        }
        printf("%.1lf\n",sum);
    }else if(str[0] == 'A'){
        for(i = 0; i < 12; i++){
            scanf("%lf",&val[row][i]);
            sum= sum+val[row][i];
        }
        printf("%.1lf\n",sum/12.0);
    }
    return 0;
}
