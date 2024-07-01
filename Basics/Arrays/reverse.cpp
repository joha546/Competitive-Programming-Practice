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
    int rev[n];
    for(int j=0; j<n; j++){
        rev[j]=arr[n-j-1];
    }
    for(int k=0; k<n; k++){
        cout<<rev[k]<<" ";
    }
    return 0;
}