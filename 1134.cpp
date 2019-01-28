#include<stdio.h>
int main(){
    int num, i = 0, j = 0, k = 0;

    while(true){
        scanf("%d",&num);
        if(num==1){
            i++;
        }
        else if(num==2){
            j++;
        }
        else if(num==3){
            k++;
        }
        else if(num==4){
            break;
        }else{
            continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",i);
    printf("Gasolina: %d\n",j);
    printf("Diesel: %d\n",k);
    return 0;
}
