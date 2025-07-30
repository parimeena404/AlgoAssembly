#include<iostream>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSortDes(int arr[], int n){
    for(int i=0; i<n-1; i++){
        bool isSwap = false;
        for(int j=0; j<n-1; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){
            //Array is already sorted
            return;
        }
    }
    print(arr, n);
}


int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    bubbleSortDes(arr, 10);
    return 0;
}