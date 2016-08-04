#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	double l, w, bmi;
	scanf("%lf%lf", &l, &w);
	bmi = w/l/l;
	cout << bmi <<endl;
	if(bmi < 18.5)printf("too thin");
	else if(bmi <= 24)printf("standard");
	else printf("too fat");
	return 0;
}