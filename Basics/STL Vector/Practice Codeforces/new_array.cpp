#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    // size N declaration
    int n;
    cin >> n;

    // vectors initialization of size N.
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    vector<int> c;           // to initialize vector c
    // I haven't initialize like vector<int> c(2*n) cause this will store 0 in each of the memory space that will cause an wrong answer.
    
    c.reserve(2*n);        // to reserve memory for the size of c.

    c.insert(c.begin(), b.begin(), b.end());
    c.insert(c.begin()+n, a.begin(), a.end());
    for(int x:c){
        cout << x << " ";
    }
    return 0;
}