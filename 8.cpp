#include<iostream>
#include<cmath>
#include<string>
using namespace std;
double findKineticEnergy(double x, double y)
{
    double E=(0.5*x*(pow(y,2)));
    return E;
}
int main()
{
    double m,v;
    cout << "Input m : ";
    cin >> m;
    cout << "\nInput v : ";
    cin >> v;
    cout << "\nE = " << findKineticEnergy(m,v);
    return 0;
}