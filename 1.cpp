#include <iostream>
#include <string>
using namespace std;
int main(){
    string N;
    double G;
    cout << "What is your name? : ";
    cin >> N;
    cout << "What is your GPA? : ";
    cin >> G;

if (G>=3.5)
{
   cout << N <<" Inw Jrim Jrim!!!";
}
else
{
    cout << "Try harder, "<< N;
}
}