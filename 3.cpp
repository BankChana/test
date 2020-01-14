#include <iostream>
#include <string>
#include<cmath>
using namespace std;

double sumSqrt(double x){
    double i=1;
    double c, sum=0;
    while (i<=x)
    {
        if (x>0)
        {
            c = 1/(sqrt(i));
            i++;
            sum = sum+c;
        }
        else
        {
            return 0;
        }
        
    }
    return sum;
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