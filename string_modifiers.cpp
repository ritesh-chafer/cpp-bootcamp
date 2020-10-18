#include<iostream>
#include<string>
using namespace std;
int main()
{
    string greeting = "What the hell?";
    greeting.replace(greeting.find("hell"), 4, "****");
    cout<<greeting<<endl;
    cout<<greeting.find_first_of("!")<<endl;        //npos = -1
    if(greeting.find_first_of("!") == -1){
        cout<<"NOT FOUND!"<<endl; 
    }
}