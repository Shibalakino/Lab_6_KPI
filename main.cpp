#include <iostream>
#include <math.h>

using namespace std;

double max(double a, double b);
double result(double a, double b);
double power(double a, double b);
double h(double a, double b);

int main()
{
	cout.precision(2);
	double s, t;
	cin >> s >> t;
	cout  << fixed << result(s,t);
	return 0;
}

double result(double s, double t)
{
	double res = h(s, t) + max(pow(h(s - t, s * t), 2), pow(h(s - t, s + t), 4)) + h(1, 1);
	return res;
}

double max(double a, double b)
{
	if (a >= b)
	{
		return abs(a);
	}
	else 
	{
		return abs(b);
	}
}
double pow(double a, double b)
{
	double n = a;
    for(int i = 0; i < b; i++)
	{
		a *= n;
	}
	return a;
}

double h(double a, double b)
{
	double res = (a / (1 + pow(b, 2)) + (b / (1 + pow(a, 2))) - pow((a - b), 3));
	return res;
}
