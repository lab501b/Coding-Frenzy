#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	float a,x,b,c,ans;
	scanf("%f%f%f",&a,&b,&c);
    x = -b/(2*a);
    ans=a*x*x+b*x+c;
	cout << ans;
	return 0;
}
