#include<stdio.h>
int main(){
    char name[50];
    double salary, sell, total;

    scanf("%s",&name);

    scanf("%lf %lf",&salary,&sell);
    total = (salary +(sell*15/100));
    printf("TOTAL = R$ %.2lf\n",total);


}
