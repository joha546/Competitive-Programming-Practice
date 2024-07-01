// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    bool flag=false;
    for(int j=0; j<n; j++){
        if(x==arr[j]){
            cout<<j<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<"-1"<<endl;
    }
    return 0;
}