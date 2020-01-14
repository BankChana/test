#include<iostream>
using namespace std;
int main()
{
    int N=6;
    int x[N] = {9, -7, 3, 4, -2, 4};

    int i= 0;
    while (i<N)
    {
        if(x[i]>0){
        	cout << x[i] <<" ";
		}
        	i++;
    }    
    return 0;
}