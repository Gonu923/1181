#include<stdio.h>
int main(){
    int num, i=0;
    while(num!=4){
        scanf("%d",&num);
    }
    for( ; ; ){

        if(num==1){
            i++;
            printf("Alcohol: %d\n",i);
        }
        else if(num==2){
            i++;
            printf("Gasoline: %d\n",i);
        }
        else if(num==3){
            i++;
            printf("Diesel: %d\n",i);
        }
        else if(num==4){
            break;
        }else{
            i++;
            printf("MUITO OBRIGADO\n");
        }
    }
}
