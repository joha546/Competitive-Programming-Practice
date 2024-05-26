#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;
    int f,s,t;
    if (a<=b && a<=c) {
        f=a;
        if(b<=c){
            s=b;
            t = c;
        }else{
            s=c;
            t=b;
        }
    } else if(b<=a && b<=c){
        f=b;
        if(a<=c){
            s=a;
            t=c;
        }else{
            s=c;
            t=a;
        }
    }else{
        f=c;
        if(a<=b){
            s=a;
            t=b;
        }else{
            s=b;
            t=a;
        }
    }
    cout<<f<<endl<<s<<endl<<t<<endl;
    cout << endl;
    cout<<a<<endl<<b<<endl<<c<< endl;

    return 0;
}
