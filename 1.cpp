#include <iostream>
#include <math.h>

using namespace std;

double f(double x){
	return -x * x + 2 * sin(x);
}

double findRoots(double a, double b, double e)
{
	double c;
	while (b - a >= e){
		c = (a + b) / 2;
		if(f(b) * f(c) < 0)
			a = c;
		else
			b = c;
	}
	return a+b/2;
}

int main(){
	double a, b, e;
	cout<<"Enter [a;b]"<<endl;
	cin>>a>>b;
	cout<<"Enter e"<<endl;
	cin>>e;
	cout<<"x = "<<findRoots(a,b,e);
	return 0;
}
