#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> x = {10,20,30,40,50};
    vector<int> v = {100,200,300,400};
    // Insertion.
    x.insert(x.begin()+2, 60);             // for single value insertion

    x.insert(x.begin()+2, v.begin(), v.end());
    for(int c: x){  // range based for loop
    // and we'll not get range and manipulate that.
        cout << c << " ";
    }
    
    return 0;
}