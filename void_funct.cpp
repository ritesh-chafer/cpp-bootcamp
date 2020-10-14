#include <iostream>
#include <cmath>
using namespace std;

double power(double base, int exponent)      //definition
{   
    double result = 1;
    for(int i = 0; i<exponent; i++){
        result = result * base;
    }
    return result;
}

void print_pow(double base, int exponent){
    double myPower = power(base, exponent);
    cout<<base<<" raised to the "<<exponent<<" power is "<<myPower<<endl;
}

int main(){
    double base;
    int exponent;
    cout<<"Enter Base: "<<endl;
    cin>>base;
    cout<<"Enter Exponent: "<<endl;
    cin>>exponent;
    print_pow(base, exponent);
}