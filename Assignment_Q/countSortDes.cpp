#include<iostream>
using namespace std;

void countSortDes(int arr[], int n){
    int freq[100000] = {0}; //range
    int minVal = INT_MAX, maxVal = INT_MIN;
    for(int i=0; i<n; i++){
        minVal = min(minVal, arr[i]);
        maxVal = min(maxVal, arr[i]);
    }

    //1st step
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }

    //2nd step
    for(int i=maxVal; j=0; i<=minVal; i++){
        while(freq[i] > 0){
            arr[j--] = i;
            freq[i]++;
        }
    }

    print(arr, n);
}

int main(){
    int arr[10] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
    countSortDes(arr, 10);
    return 0;
}