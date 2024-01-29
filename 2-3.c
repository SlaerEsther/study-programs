#include<stdio.h>

int main()
{
    int a,b,c;

    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        c = a;
    }
    else
    {
        c = b;
    }

    printf(" %d 是最大的数。",c);

    return 0;
}