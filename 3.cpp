#include <iostream>
#include<cmath>
using namespace std;
double sumSqrt(double x){
    double i=1;
    double c, sum=0;
    if(x>0){
    while(i>0){
        if(i>x){return sum;
    }
    else{
        c=1/pow(i,0.5);
        sum=sum+c;
        i++;
    }}}
    else
    {
        return 0;
    }
}

int main()
{
    double a = sumSqrt(20);
    double b = sumSqrt(10);
    double c = sumSqrt(5);
    double d = sumSqrt(2);
    double e = sumSqrt(1);
    double f = sumSqrt(0);
    double g = sumSqrt(-1);
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n";
}