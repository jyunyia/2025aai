///week11-2.cpp
///�禡�ŧi�A�禡�w�q�A�禡�I�s
#include <stdio.h>
int addnum(int a,int b) ///�ŧi��ӰѼƪ��Ϊ��W�r
{ ///�e���O�禡���w�q
    printf("�{�b�i�J addnum() �禡��,a:%d b:%d\n",a,b);
    int x;
    x=a+b;
    printf("���ۥ[����A�o��ƭ�%d�Nreturn�^��",x);
    return x; ///�^�ǵ����I�s���a��
}

int main()
{
    int ans = addnum(10,30); ///�ϥέ�誺�ۭq�禡
    printf("%d",ans);
}
