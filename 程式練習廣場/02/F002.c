#include <stdio.h>
#include <stdlib.h>
int main()
{
	int value=1;

	while(1)
	{
		value = value << 1;
		if(value<0)
		{
		value-=1;
		printf("%d\n",value);
		printf("%d",value+=1);
		break;
		}
	}
	return 0;
}
