#include<iostream>
#include<float.h>
using namespace std;
int main()
{
    float a = 10.0/3;
    a = a * 1000000000;
    double b = 7.7E4;
    long double c;
    cout<<fixed<<a<<endl;
    cout<<fixed<<b<<endl;
    cout<<FLT_DIG<<endl;
    cout<<DBL_DIG<<endl;
    cout<<LDBL_DIG<<endl;
}