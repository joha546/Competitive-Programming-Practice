// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int fact=1;
        for(int i=n; i>=1; i--){
            fact *=i;
        }
        cout<<fact<<endl;
    }
    

    return 0;
}