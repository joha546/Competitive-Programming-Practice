// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,pass=1999;
    while(true){
        cin>>n;
        if(n!=pass){
            cout<<"Wrong"<<endl;
        }
        else{
            cout<<"Correct"<<endl;
            break;
        }
    }
    return 0;
}