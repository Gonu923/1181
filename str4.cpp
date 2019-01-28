#include<stdio.h>
int StringLength(char x[]);
int main(){
    char str[30];
    int len;
    printf("Enter string: ");
    gets(str);
    len = StringLength(str);
    printf("Length is: %d\n",len);
}
int StringLength(char x[]){
    int i = 0, cot =0;
    while(x[i]!= 0){
        i++;
        cot++;
    }
    return cot;
}
