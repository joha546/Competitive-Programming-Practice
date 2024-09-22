#include<iostream>
#include<vector>
using namespace std;

int main(){

    // max Size.
    vector<int> v;
    cout << v.max_size() << endl;

    v.push_back(5);
    v.push_back(30);
    v.push_back(10);
    v.push_back(20);

    // Resizing vector
    // v.resize(2);
    v.resize(7, 100);
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    // Capacity is upgradable dynamically.
    // cout << v.capacity() << endl;

    // For checking capacity function.
    // v.push_back(5);
    // cout << v[0] << endl;
    // cout << v.capacity() << endl;

    // v.push_back(20);
    // cout << v[1] << endl;
    // cout << v.capacity() << endl;

    // v.push_back(30);
    // cout << v[2] << endl;
    // cout << v.capacity() << endl;f
    return 0;
}