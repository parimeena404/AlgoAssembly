#include<iostream>
using namespace std;

int main(){
    int y; 
    cout<<"Enter year:";
    cin>>y;

    if(y%4==0){
        cout<<"Year is a leap year"<<endl;
    }else{
        cout<<"Year is not a lesp year"<<endl;
    }

    return 0;
}