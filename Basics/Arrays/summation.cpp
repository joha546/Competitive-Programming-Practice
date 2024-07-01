// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    long long s=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        s+=arr[i];
    }
    cout<<abs(s)<<endl;
    return 0;
}