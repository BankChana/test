#include <iostream>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
 T temp = d[x];
 d[x] = d[y];
 d[y] = temp;
}
template <typename T>
void selectionSort(T d[],int N){
    int min;
    for(int i=0 ; i<N ; i++){
        min=i;
        for(int j=i ; j<N ;j++){
            if (d[min] > d[j])
                min = j;
        }
	swap(d, i, min);
    }
    
}
int main(){
	int N =5  ;
    int M[5];
    cout << "Enter : ";
    for (int i=0; i<N; i++){
        cin >> M[i];
    }
    selectionSort(M,5);
     for (int i=0; i<N; i++){
        cout << M[i] << " ";
    }
}