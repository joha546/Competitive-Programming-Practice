#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> x;
    int n;
    cin >> n;

    // first method.
    // for(int i=0; i<n; i++){
    //     // cin >> x[i];                         - it won't work cause the vector size wasn't declared or memory not allocated to stor data.
    //     int v;
    //     cin >> v;
    //     x.push_back(v);
    // }

    vector<int> x2(n);
    for(int i=0; i<n; i++){
        cin >> x2[i];
    }
    for(int c:x2){
        cout << c << " ";
    }
    return 0;
}