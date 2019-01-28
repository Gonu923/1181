#include<stdio.h>
#include<string.h>
int reverseS(char x[]);
int main(){
    char str[30];
    int rev;
    printf("Enter your name: ");
    gets(str);
    rev = reverseS(str);
    printf("%s\n",str);
}
int reverseS(char x[]){
    int i, j, temp;
    while(i<j){
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
    }
    return temp;
}
