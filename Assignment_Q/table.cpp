#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number for table:";
    cin>>n;

    for(int i=1; i<=10; i++){
        int mul;
        cout<<n * i<<" = "<<mul<<endl; 
    }
    return 0;
}