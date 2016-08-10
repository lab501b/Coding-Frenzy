#include <stdio.h>
#include <stdlib.h>

int main(){

	char a[] ="看!cout看到了什麼會驚叫!";
	char b[] ="cout看到了7會尖叫!";

	printf(a);
	printf("\n");
	printf(b);
	printf("\a");
	return 0;
}
