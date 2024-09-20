#include<iostream>
using namespace std;

int main(){
    int k,n,w,cost=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w; i++){
        cost =cost+(i*k);
    }
    // cout << cost << endl;
    if(cost <= n){
        cout << 0 << endl;
    }
    else{
        cout << cost-n << endl;
    }
    return 0;
}