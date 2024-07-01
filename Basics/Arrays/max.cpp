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
    int m=0;
    for(int j=0; j<n; j++){
        if(arr[j]>m){
            m=arr[j];
        }
    }
    cout<<m<<endl;
    return 0;
}