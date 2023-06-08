//Bismillahir Rahmanir Rahim
#include<stdio.h>
int main()
{
    int a,first=0,second=1;
     scanf("%d",&a);
     printf("%d, %d,",first,second);
     for (int i=2;i<a;i++)
     {
        int b=first+second;
        printf(" %d,",b);

        first=second;
        second=b;

     }

    return 0;
}