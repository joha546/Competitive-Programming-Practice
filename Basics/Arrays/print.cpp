#include <iostream>
using namespace std;

void printarray(int a[]){
    for(int j=0; j<10; j++){
        cout<<a[j]<<" ";
    }
}
int main(){
    int a[10];
    for(int i=0; i<10; i++){
        a[i]=i;
    }
    printarray(a);
    return 0;
}