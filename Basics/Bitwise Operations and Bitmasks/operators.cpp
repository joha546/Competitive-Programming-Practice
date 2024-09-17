#include<iostream>
using namespace std;


void calculate_the_maximum(int n, int k){
    int maximum_and = 0, maximum_or = 0, maximum_xor = 0;
    int x, y, z;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            x = i & j;
            y = i | j;
            z = i ^ j;

            if(x < k && x > maximum_and){
            maximum_and = x;
            }
            if(y < k && y > maximum_or){
                maximum_or = y;
            }
            if(z < k && z > maximum_xor){
                maximum_xor = z;
            }
        }
    }
    cout << maximum_and << endl;
    cout << maximum_or << endl;
    cout << maximum_xor << endl;
}
int main(){
    int n , k;
    cin >> n >> k;

    calculate_the_maximum(n , k);
    return 0;

}