#include<iostream>
using namespace std;

int main(){
    int k , s, x, y, z;
    cin >> k >> s;

    int ans=0;
    for(x=0; x<=k; x++){
        for(y=0; y<=k; y++){
            z= s-x-y;
            if(0<=z and z<=k){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
