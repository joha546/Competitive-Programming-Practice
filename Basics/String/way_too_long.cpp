#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        if(s.length()>10){
            int n;
            n=s.length()-2;
            cout<<s[0]<<n<<s[s.length()-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}