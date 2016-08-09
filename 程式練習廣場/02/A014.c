#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,n,p,d,i;

	scanf("%d%d%d",&n,&p,&d);
	printf("");
	a=n;
	for(i=1;i<p;i++)
	{
		n*=a;
		n%=d;
	}

	printf("%d",n);

}
