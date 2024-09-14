#include<iostream>
using namespace std;

int main(){
    int luckyNumbers[5];
    // for(int i=0; i<5; i++){
    //     cout<<luckyNumbers[i]<<endl;
    // }

    // cout << *(luckyNumbers+2) << endl;
    for(int i=0; i<5; i++){
        cin>>luckyNumbers[i];
    }
    for(int i=0; i<5; i++){
        cout << *(luckyNumbers+i) << " ";   // dereferencing to each element.
    }
    return 0;
}