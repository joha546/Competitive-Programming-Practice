// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    if(n>=2){
        for(i=1; i<=n;i++){
            if(i%2==0){
                cout<<i<<endl;
            }
        }
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}