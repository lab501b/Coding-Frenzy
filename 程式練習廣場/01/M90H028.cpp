#include <iostream>

using namespace std;

int main(){
	float x[2]={0}, y[2]={0}, ansx, ansy;
	cin >> x[0] >> y[0] >> x[1] >> y[1];
	ansx = (x[0]+x[1])/2;
	ansy = (y[0]+y[1])/2;
	cout << "(" << ansx << "," << ansy << ")";
	return 0;
}