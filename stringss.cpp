#include<iostream>

using namespace std;
int main()
{
    string greeting = "Hi, This is Alex!";
    cout<<greeting<<endl;
    string Say = greeting + " Good Morning";
    cout<<Say<<endl;
    cout<<Say.length()<<endl;
    //method == member function == function attached to objects

    char name[] = "Caleb"; //c string == array of characters "Caleb\0"
    cout<<name<<endl;
}