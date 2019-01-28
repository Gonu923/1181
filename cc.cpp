#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i, f1, f2, ans;
    for(i = 1; i <= n; i++){
        scanf("%d %d",&f1,&f2);
    }
    if(f2>f1){
        ans = f2 -f1;
        if(ans>f1){
            printf("%d\n",f1);
        }else{
            printf("%d\n",ans);
        }
    }else{
        ans = f1- 2*f2;
        printf("%d\n",ans);
    }

}
