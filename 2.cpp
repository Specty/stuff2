#include <iostream>
#include <math.h>

using namespace std;

#define EPSILON 1e-6


double f(double x){
	return -x * x + 2 * sin(x);
}

double f1(double x) //тут мы выражаем Х
{
	return 2 * sin(x) / x;
}

double df(doubel x){
	return 2*cos(x)-2*x;
}

double findRoots(double a, double b, double e, double x0){
	double x1;
	if((f(a)*f(b))<0)
	{
		for(;;)
		{
			x1=f1(x);
			if (fabs(x1 - x0) < e) break;
			x0=x1;
		}
		return x1;
	} else {
		cout<<"Не выполнено необходимое условие"<<endl;
		return 0;
	}
}


main() {
	double a, b, e, x0;
	cout<<"Enter [a;b]"<<endl;
	cin>>a>>b;
	cout<<"Enter e"<<endl;
	cin>>e;
	cout<<"Enter x0"<<endl;
	cin>>x0;
	cout<<"x = "<<findRoots(a,b,e,x0);
	return 0;
}
