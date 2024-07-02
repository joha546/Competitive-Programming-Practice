// Online C++ compiler to run C++ program online
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int t,n,s;
    cin>>t;
    while(t--){
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int sm_pair=INT_MAX;
        for(int j=0; j<n; j++){
            for(int k=j+1; k<n; k++){
                s=arr[j]+arr[k]+k-j;
                if(sm_pair>s){
                    sm_pair=s;
                }
            }
        }
        cout<<sm_pair<<endl;
    }
    return 0;
}