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
    bool flag=true;
    for(int i=0; i<n; i++){
        if(arr[i] !=arr[n-i-1]){
            flag=false;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}