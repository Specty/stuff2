#include <stdio.h>
#include <math.h>

using namespace std;

double f(double x){
	return -x * x + 2 * sin(x);
}

double df(double x){
	return 2*cos(x)-2*x;
}


double solve(double a, double b, double e) {
	double x;
	x = (a + b) / 2;
	do {
		x -= f(x)/df(x);
	} while (fabs(dx) > eps);
	return x;
}


main() {
	double a, b, e;
	cout<<"Enter [a;b]"<<endl;
	cin>>a>>b;
	cout<<"Enter e"<<endl;
	cin>>e;
	cout<<"Enter x0"<<endl;
	cin>>x0;
	cout<<"x = "<<findRoots(a,b,e);
	return 0;
}
