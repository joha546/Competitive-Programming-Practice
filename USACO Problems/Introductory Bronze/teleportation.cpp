#include<iostream>
using namespace std;

int main(){
    int a,b,x,y;
    cin >> a >> b >> x >> y;

    int dist = abs(a-b);
    if(dist > abs(a-x) + abs(b-y)){
        dist = abs(a-x) + abs(b-y);
    }
    if(dist > abs(a-y) + abs(b-x)){
        dist = abs(a-y) + abs(b-x);
    }
    cout << dist << endl;
    return 0;
}