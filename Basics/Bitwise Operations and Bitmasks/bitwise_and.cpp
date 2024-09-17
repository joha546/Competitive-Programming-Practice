#include<iostream>
using namespace std;

int bitwiseAnd(int n, int k){
    int andx, maximum_and = 0;
    // int a, b;

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            andx = i & j;

            if(andx < k && andx > maximum_and){
                maximum_and = andx;
            }
        }
    }
    return maximum_and;
}
int main(){
    int t, n, k;
    cin >> t;

    while(t--){
        cin >> n >> k;
        int result = bitwiseAnd(n, k);
        cout << result << endl;
    }
    return 0;
}