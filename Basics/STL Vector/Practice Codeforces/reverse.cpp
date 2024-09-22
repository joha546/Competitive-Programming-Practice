#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> rev;
    rev.reserve(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int j=n-1; j>=0; j--){
        rev.push_back(a[j]);
    }

    for(int j : rev){
        cout << j << " ";
    }

    return 0;
}