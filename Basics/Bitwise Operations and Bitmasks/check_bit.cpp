#include <iostream>
using namespace std;

bool checkBit(int x, int i){
    return (x & (1 << i));
}
int main(){
    int x, i;
    cin >> x >> i;

    bool result = checkBit(x, i);
    if(result == 1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}