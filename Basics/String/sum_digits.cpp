#include<iostream>
#include<string>
using namespace std;

int main(){
    int num;
    cin>>num;
    string digits;
    cin>>digits;
    int sum=0;
    for(char c:digits){
        sum +=c-'0';        // Convert the character to its integer value by subtracting '0' (the ASCII value of '0' is 48, so c - '0' converts the character to its integer representation).
    }
    cout<<sum<<endl;
}