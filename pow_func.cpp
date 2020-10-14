#include <iostream>
#include <cmath>
using namespace std;

double power(double, int);          //declarartion

int main(){
    int base, exponent;
    double myPower;
    cout<<"Enter Base: "<<endl;
    cin>>base;
    cout<<"Enter Exponent: "<<endl;
    cin>>exponent;
    myPower = power(base, exponent);
    cout<<myPower<<endl;
}

double power(double base, int exponent){
    double result = 1;
    for(int i = 0; i<exponent; i++){
        result = result * base;
    }
    return result;
}