#include <stdio.h>
int main()
{
    int a,b,c;
    int *x[3];
    x[0]=&a;
    x[1]=&b;
    x[2]=&c;

    *x[0]=1;
    *x[1]=10;
    *x[2]=2;

    printf("a:%d\n",a);
    printf("b:%d\n",b);
    printf("c:%d\n",c);

    return 0;

}