#include<stdio.h>
int main(){
    int T,i;
    int pa, pb, ans1, ans2, result;
    double g1, g2;
    scanf("%d",&T);
    for(i = 1; i <= T; i++){
        scanf("%d %d",&pa, &pb);
        scanf("%lf %lf",&g1, &g2);
        ans1 = pa- (pa*g1)/100;
        ans2 = pb - (pb*g2)/100;
        result = ans2-ans1;
        if(result>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n",result);
        }


    }

    return 0;

}
