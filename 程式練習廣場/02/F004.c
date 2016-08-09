#include <stdio.h>
#include <stdlib.h>
int main()
{
	short value=1;

	for(;;)
	{
		value+=value;
		if(value<0)
		{
			value-=1;
			printf("%d\n",value);
			value=value+1;
			printf("%d",value);
			break;
		}
	}
	return 0;
}
