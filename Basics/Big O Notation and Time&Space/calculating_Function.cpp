#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long int n,sum=0;
    cin >> n;

    // Brute force approach
    // while(i<=n){
    //     if(i%2==0){
    //         sum += i;
    //     }
    //     else{
    //         sum -= i;
    //     }
    //     i++;
    // }

    if(n%2==0){
        sum = n/2;
    }
    else{
        sum = ((n+1)/2)*(-1);
    }
    cout << sum << endl;
    return 0;
}