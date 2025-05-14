///week13-3.cpp
#include <stdio.h>
int gcd(int a,int b)
{///老大A,老二B
    printf("老大A:%d,老二B:%d\n",a,b);
    if(a==0)return b;
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    printf("請輸入兩個數字(ex. 50 68) ");
    int a, b;
    scanf("%d %d",&a,&b);
    int ans=gcd(a,b);
    printf("它的最大公因數是:%d\n ",ans);
}
