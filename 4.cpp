#include <iostream>
using namespace std;
string compress(string x,string y){
    int L1=x.size();
    int L2=y.size();
    int i=0;
    string a = "";
    while (i<L1)
    {
        a += x[L1-i-1];
        a += y[L2-1-i];
        i=i+3;
    }
    return a;
     
}

int main()
{
    string a = compress("ABCDEFGHIJKLMN","abcdefghijkmn");
    string b = compress("123456","567890"); 
    cout <<a<<"\n"<< b<<"\n";
return 0;
}