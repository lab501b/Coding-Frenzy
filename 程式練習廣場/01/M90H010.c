#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a=1,b=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
	{
		a*=2;
		a%=10;
		b+=a;
	}
	b=b%10;
	printf("%d",b);
    return 0;
}
