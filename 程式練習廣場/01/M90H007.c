#include <stdio.h>
#include <stdlib.h>


int main()
{
    float x[60],c[60],max=0,min=0;
    int i;

    	for(i=0;i<60;i++)
	{
        scanf("%f",&x[i]);
        if(max<x[i])max=x[i];
	  	if(min>x[i])min=x[i];
	}
		for(i=0;i<60;i++)
	{
		c[i]=((100)-(40)*(max-x[i])/(max-min))+0.5;
		printf("%d\n",(int)c[i]);
	}
    return 0;
}
