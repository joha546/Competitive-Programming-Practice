// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,i;
    cin>>n;
    bool isPrime=true;
    for(i=2; i<n/2; i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}