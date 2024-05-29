// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    
    while(true){
        int n,m;
        int sum=0;
        cin>>n>>m;
        if(n<=0 || m<=0){
            break;
        }
        if(n<m){
            for(int i=n; i<=m; i++) {
                sum +=i;
                cout<<i<<" ";
            }
        }
        else{
            for(int i=m; i<=n;i++) {
                sum +=i;
                cout<<i<<" ";
            }
        }
        cout<<"sum ="<<sum<<endl;
    }
    
    return 0;
}