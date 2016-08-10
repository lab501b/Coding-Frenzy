#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("\n%d / %d=%d\n%d mod %d=%d",m,n,m/n,m,n,m-(m/n)*n);

    return 0;
}
