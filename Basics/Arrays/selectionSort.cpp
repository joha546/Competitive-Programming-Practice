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
    for(int j=0; j<n; j++){
        int min_idx=j;
        for(int l=j+1; l<n; l++){
            if(arr[l]<arr[min_idx]){
                min_idx=l;
            }
        }
        if(min_idx !=j){
            swap(arr[min_idx],arr[j]);
        }
    }
    for(int k=0; k<n; k++) {
        cout<<arr[k]<<" ";
    }
    return 0;
}