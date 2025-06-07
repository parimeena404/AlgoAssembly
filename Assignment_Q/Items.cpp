#include<iostream>
using namespace std;

int main(){
    float pen;
    float pencil;
    float eraser;

    cout<<"Enter the price of pen:";
    cin>>pen;

    cout<<"Enter the price of pencil:";
    cin>>pencil;

    cout<<"Enter the price of eraser:";
    cin>>eraser;

    float Tcost = (pen+pencil+eraser);

    cout<<"Total cost:"<<Tcost +(0.18*Tcost)<<endl;
    return 0;
}