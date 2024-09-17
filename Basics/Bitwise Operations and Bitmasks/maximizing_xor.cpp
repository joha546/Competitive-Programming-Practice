#include<iostream>
using namespace std;


int maximizingXor(int l, int r){
    int xorx , maximum_xor = 0;

    for(int i=l; i<=r; i++){
        for(int j=i; j<=r; j++){
            xorx = (i ^ j);
            if(xorx >maximum_xor){
                maximum_xor = xorx;
            }
        }
    }
    return maximum_xor;
}
int main(){
    int l, r;
    cin >> l;
    cin >> r;

    int result = maximizingXor(l , r);
    cout << result << endl;
}