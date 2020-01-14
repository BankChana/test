#include <iostream>
#include <string>
using namespace std;
int main(){
    double sum=0, y, x ;
    cout << "Enter x :";
    cin >> x;
    while (x!=0)
    {
        if (x>0)
        {
            sum=sum+x;
        }
        cout << "Enter x :";
        cin >> x;
    }
    cout<<"sum = " <<sum;
}