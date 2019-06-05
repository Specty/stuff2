#include <math.h>
#include <conio.h>
#include <iostream>
#include <stdio.h>

#define e 0.001

using namespace std;

double f(double x){
	//func
	return -x * x + 2 * sin(x);
}

double f1(double x){
	//f'
	return 2 * sin(x) / x;
}

double Fp(double x, double E){
	return (f(x + E / 2) - f(x - E / 2)) / E;
}

int main(){
	double a, b, X, E;
	int ii;
	cout<<"-x^2+2*sin(x)"<<endl;
	cout<<"Enter [a;b]"<<endl;
	cin>>a>>b;
	cout<<"Enter e"<<endl;
	cin>>E;
	cout<<"Metod?"<<endl<<"1 - poldel, 2 - Newtyan, 3 - Prost iter"<<endl;
	cin>>ii;
	X = a;
	double Xt;
	int count = 0;
	do{
		count++;
		Xt = X;
		if (ii == 1)
		{
			X = (b + a) / 2;
		}else{
			if (ii == 2)
			{
				X = -f(X) / Fp(X, E) + X;
			}else{
				if (ii == 3)
				{
					X = f1(X);
				}
			}
		}
		cout << "[" << count << "]=" << X << endl;
		if (f(X) * f(a) > 0)
			a = X;
		else
			b = X;
	}
	while (fabs(X - Xt) >= E);
	cout << "X=" << X;
	cin.get();
	return 0;
}
