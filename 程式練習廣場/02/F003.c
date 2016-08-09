#include <stdio.h>
#include <stdlib.h>
int main()
{
	unsigned  int value=1;

	for(;;)
	{
		value = value << 1;
		if(value==0)
		{
		value-=1;
		printf("%u\n",value);
		printf("%u",value+=1);
		break;
		}
	}
	return 0;
}
