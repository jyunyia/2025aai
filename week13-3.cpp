///week13-3.cpp
#include <stdio.h>
int gcd(int a,int b)
{///�ѤjA,�ѤGB
    printf("�ѤjA:%d,�ѤGB:%d\n",a,b);
    if(a==0)return b;
    if(b==0)return a;
    return gcd(b,a%b);
}

int main()
{
    printf("�п�J��ӼƦr(ex. 50 68) ");
    int a, b;
    scanf("%d %d",&a,&b);
    int ans=gcd(a,b);
    printf("�����̤j���]�ƬO:%d\n ",ans);
}
