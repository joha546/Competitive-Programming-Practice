#include<iostream>
#include<string>
using namespace std;

int main(){
    int a;
    cin>>a;
    string s = to_string(a);
    if(s[0]%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
    return 0;
}