#include<iostream>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;

    while(t--){
        int move=0;
        cin >> a >> b;

        // got TLE in this approach
        // if(a%b==0){
        //     cout<< move << endl;
        // }
        // else{
        //     while(a%b!=0){
        //         a=a+1;
        //         move+=1;
        //     }
        //     cout << move << endl;
        // }

        if(a%b==0){
            cout << move << endl;
        }
        else{
            move = b-(a%b);
            cout << move << endl;
        }
        
    }
    return 0;
}