#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t;
    long long int n,a, sum =0;
    cin >> t;
    // Brute Force approach but got TLE
    // while(t--){
    //     cin >> n;
    //     for(int i=1; i<=n; i++){
    //         if((ceil(log2(i)) == floor(log2(i)))){
    //             sum -= i;
    //         }
    //         else{
    //             sum += i;
    //         }
    //     }
    //     cout << sum << endl;
    // }

    while(t--){
        cin >> n;
        sum = n*(n+1)/2;

        // checking 
        cout << sum << endl;
        a=1;
        while(a<=n){
            sum -= 2*a;
            a = a*2;
        }
        cout << sum << endl;
    }
    return 0;
}