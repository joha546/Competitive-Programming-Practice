#include<iostream>
using namespace std;

int main(){
    int a , i;
    cin >> a;
    cout << "Shift Right" << endl;
    for(i = 0; i < 4; i++){
        cout << i << " " << (a>>i) << endl;
    }
    cout << endl;
    cout << "Shift Left" << endl;
    for(i = 0; i < 4; i++){
        cout << i << " " << (a<<i) << endl;
    }
    return 0;
}