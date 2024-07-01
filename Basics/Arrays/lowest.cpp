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
    int m=arr[0];
    int min_idx;
    for(int j=0; j<n; j++){
        if(arr[j]<m){
            m=arr[j];
            min_idx=j;
        }
    }
    cout<<m<<" "<<min_idx+1<<endl;
    return 0;
}