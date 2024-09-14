#include<iostream>
#include<cmath>
using namespace std;

void increment(int *a, int *b){
    int temp_a = *a + *b;
    int temp_b = abs(*a - *b);
    *a = temp_a;
    *b = temp_b;
}
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    increment(&a, &b);
    cout<< a << endl;
    cout<< b << endl;
    return 0;
}