#include<stdio.h>
int main()
{
    int t,i;
    long int n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%ld",&n);
        if(n==0)
        {
         printf("NULL\n");
         }
        if(n%2==0&&(n>0))
        {

            printf("EVEN POSITIVE\n");
        }
        else if(n%2==0&&(n<0))
        {
            printf("EVEN NEGATIVE\n");
        }
        else if(n%2==-1&&(n<0))
        {

            printf("ODD NEGATIVE\n");
        }
        else if(n%2==1&&(n>0))
        {
            printf("ODD POSITIVE\n");
        }

    }

    return 0;
}
