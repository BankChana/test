#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    ifstream source;
    string textline;
    double sum=0,x=0,i=0;
    source.open("C:\\Users\\LENOVO\\Desktop\\VS Code\\lab9\\lab9-2562-2-BankChana\\score.txt");
    while (getline(source,textline))
    {
        sum = sum+atof(textline.c_str());
        x =  x+pow(atof(textline.c_str()),2);
        i++;
    }
        cout << "Number of data = " << i << endl;
        cout << "Mean = " << sum/i <<endl;
        cout << "Standard deviation = " << sqrt((1/i)*x-pow((sum/i),2));
        source.close();
    return 0;
}name T>
void insertionSort(T d[],int N){
	for(int i=0;i<N;i++){
		if (d[i]<d[i-1]) swap(d,i,i+1);
	}


}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}


