#include <iostream>
#include <math>

using namespace std;

double f(double x){
	return -x * x + 2 * sin(x);
}
 
double findRoot(double a, double b, double e){
	while(fabs(f(b)) > e)
	{
		a = b - ((b - a) * f(b))/(f(b) - f(a));
		b = a - ((a - b) * f(a))/(f(a) - f(b));
	}
	return b;
}

int main(){
	double a, b, e;
	cout<<"Enter [a;b]"<<endl;
	cin>>a>>b;
	cout<<"Enter e"<<endl;
	cin>>e;
	cout<<"Root x="<<findRoot(a, b, e)<<endl;
	return 0;
}
