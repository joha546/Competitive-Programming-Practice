#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> x = {10,20,30,40,50};
    // find(x.begin(), x.end(), 20);f

    vector<int>::iterator it;
    it = find(x.begin(), x.end(), 20);
    cout << *it << endl;
    if(it== x.end()){
        cout << "Not Found" << endl; 
    }
    else{
        cout << "Found" << endl;
    }
    return 0;
}