#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void randomMatrix(double [][10]);
int main()
{
    double B[10][10];
    srand(time(0));
    randomMatrix(B);
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cout<<B[i][j]<<" ";
        }
        cout << endl;
    }
}
void randomMatrix(double A[][10])
{
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            A[i][j]=(rand()%10000)/1000.000;
        }
    }
}