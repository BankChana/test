#include<iostream>
using namespace std;
const int N = 3;
void inputMatrix(double [][N]);
void matrixMultiply(const double [][N], const double [][N], double [][N]);
void showMatrix(const double [][N]);

int main(){
double A[N][N], B[N][N], C[N][N];
cout << "Input the first matrix.....\n";
inputMatrix(A);
cout << "Input the second matrix.....\n";
inputMatrix(B);
matrixMultiply(A,B,C);
cout << "Result is \n";
showMatrix(C);
return 0;
}

void inputMatrix(double x[][N])
{
    for(int i=0;i<N;i++){
        cout << "Row " << i+1 << " : ";
        for(int j=0;j<N;j++){
            cin >> x[i][j];
        }
    }
}
void matrixMultiply(const double x[][N], const double y[][N], double z[][N])
{

    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            double sum = 0;
            for(int k=0;k<N;k++){
                sum += (x[i][k]*y[k][j]);
                z[i][j]=sum;
            }
        }
    }
}
void showMatrix(const double x[][N])
{
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            cout << x[i][j] << " ";
        }
        cout << endl;
    }
}