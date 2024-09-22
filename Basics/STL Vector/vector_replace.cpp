#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> x = {10,20,30,40,50};
    replace(x.begin(), x.end(),20,100);

    for(int c:x){
        cout << c << " ";
    }
    return 0;
}