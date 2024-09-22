#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> x = {10,20,30,40,50};
    
    // x.erase(x.begin()+3);
    // x.erase(x.begin()+1, x.begin()+4);
    x.erase(x.begin()+1, x.end()-1);
    for(int c:x){
        cout << c << " ";
    }
    return 0;
}