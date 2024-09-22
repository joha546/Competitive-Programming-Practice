#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Vector constructor with 0 element.                - type1 
    vector<int> v;
    cout << v.size() << endl;

    // Initializing vector with N size and given data o in that space.           - type2 & 3
    int n;
    cin >> n;
    vector<int> v2(n,10);
    cout << v2.size() << endl;
    for(int i=0; i<n; i++){
        cout << v2[i] << " ";
    }

    cout << endl;
    vector<int> v3(5,100);             // type-4
    vector<int> v4(v3);

    int a[6] = {1,2,3,4,5,6};          // type-5
    vector<int> v5(a, a+6);         
    for(int i=0; i<6; i++){
        cout << v5[i] << " ";
    }   

    // another type of initialization;
    vector<int> v6={};
    for(int i=0; i<6; i++){
        cout << v5[i] << " ";
    }

    return 0;
}