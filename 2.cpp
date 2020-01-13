#include <iostream>
#include <string>
using namespace std;
int main(){
    double sum=0, n=1, x ;
    while (n>0)
    {
        cout << "Enter X : ";
        cin >> x;
        if (x==0)
        {
            cout << "sum = " <<sum;
            return 0;
        }
        if (x>0)
        {
            sum=sum+x;
        }
        n++;
        
    }
    
}