#include<iostream>
using namespace std;


void selectionSortDes(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int maxIdx = i;
        //loop for find min
        for(int j=i+1; j<n; j++){
            if(arr[j] > arr[maxIdx]){
                maxIdx = j;
            }
        }
        swap(arr[i], arr[maxIdx]);
    }
    print(arr, n);
}


int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    selectionSortDes(arr, 10);
    return 0;
}