#include<iostream>
using namespace std;

void updateIthBit(int num, int i, int val){
    num = num & ~(1<<i); // clear the ith bit

    num = num | (val<<i); // setting new value
    cout<<num<<endl;
}

int main(){

    updateIthBit(7, 2, 0);
    return 0;
}