#include<iostream>
using namespace std;

unsigned int swap_adj_bits(unsigned int n){
    unsigned int even_bits = n & 0xAAAAAAAA;
    unsigned int odd_bits = n & 0x55555555;

    even_bits >>=1;
    odd_bits <<=1;

    return (even_bits | odd_bits);
}
int main(){
    int t;
    unsigned int x;
    cin >> t;

    while(t--){
        cin >> x;
        cout << swap_adj_bits(x) << endl;
    }
    return 0;
}