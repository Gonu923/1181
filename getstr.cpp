#include<string.h>
#include<stdio.h>
int main(){
    char str[30];
    unsigned int len;
    printf("Enter a string: ");
    gets(str);
    len = strlen(str);
    printf("Length is : %d\n",len);
    return 0;

}
