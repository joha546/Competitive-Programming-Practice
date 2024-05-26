#include <iostream>
using namespace std;

int main(){
    int a,b,c,largest,smallest;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        largest=a;
    }else if(b>=a && b>=c){
        largest=b;
    }else{
        largest=c;
    }
    if(a<=b && a<=c){
        smallest=a;
    }else if(b<=a && b<=c){
        smallest=b;
    }else{
        smallest=c;
    }
    cout<<smallest<<" "<<largest<<endl;
    return 0;
}