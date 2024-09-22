#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> x = {10,20,30,40};
    // vector<int> v = {100,200,300};

    // // Assigning the x values to v vector.
    // v=x; // O(1) if v.size() and x.size() are equal otherwise
    // // it will take O(N) time.
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] << " ";
    // }

    x.pop_back();
    x.pop_back();
    for(int i=0; i<x.size(); i++){
        cout << x[i] << " ";
    }
    return 0;
}