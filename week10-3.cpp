//week10-3
#include <stdio.h>
int main()
{	int n,c;
	scanf("%d",&n);
	int a=n,ans=0;
	while(n>0){
		ans=ans*10+n%10;
		n=n/10;
	}
	printf("%d+%d=%d\n",a,ans,a+ans);
}
