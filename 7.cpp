#include<iostream>
#include<cmath>
using namespace std;
double myfunc(double x)
{
    double y=sin(pow(x,3))/log(((2*x)+1)/pow(x,2));
    return y;
}
int main()
{
	double x;
    cout << "Input x : ";
    cin >> x;
    cout << "\nSum = " << myfunc(x);
    return 0;
}