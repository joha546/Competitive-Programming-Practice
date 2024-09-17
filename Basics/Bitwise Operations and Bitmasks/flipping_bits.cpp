#include<iostream>
#include<cstdint>
using namespace std;

long flippingBits(long& n) {
    for(int i = 0; i < 32; i++){
        n ^= 1U << i;

    }
    return n;
}


int main() {
    int n;
    cin >> n;
    while(n--)
    {
        long a;
        cin >> a;
        long result = flippingBits(a);
        cout << result << endl;
    }
    return 0;
}