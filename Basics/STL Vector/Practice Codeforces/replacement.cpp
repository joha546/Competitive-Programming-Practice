#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int j=0; j<n; j++){
        if(a[j]>0){
            a[j]=1;
        }
        else if(a[j]<0){
            a[j]=2;
        }
        else if(a[j]==0){
            a[j]=0;
        }
        cout << a[j] << " ";
    }
    return 0;
}