#include<iostream>
using namespace std;
int main(){
    double num, r;
    int re;
    scanf("%lf",&num);
    while(true){
            re = num/100;
            r= num%100;
            re = r/50;
            r = r%50;
            re = r/20;
            r = r%20;
            re = r/10;
            r = r%10;
            re = r/5;
            r = r%5;
            re = r/2;
            r = r%2;
            re = r/1;
            r=r%1;
            re = r/0.5;
            r=r%0.5;
            re =r/0.25;
            r=r%0.25;
            re=r/0.10;
            r=r%0.10;
            re=r/0.05;
            r=r%0.05;
            re=r/0.01;
            r=r%0.01;

    }
}
