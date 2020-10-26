#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, num, q, r1, r2;
    vector<int> v;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>num;
        v.push_back(num);
    }
    cin>>q;
    cin>>r1>>r2;
    v.erase(v.begin()+(q-1));
    v.erase(v.begin() + (r1-1),v.begin()+(r2-1));
    cout<<v.size()<<endl;
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}
