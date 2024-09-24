#include<iostream>
using namespace std;

// Provides better memory management.
// Cause we can set value of variable of same datatype at a time.
union money{
    int rice;
    char Car;
    float pounds;
};
int main(){

    money m1;
    m1.rice = 35;
    m1.Car = 'c';
    cout << m1.rice << endl;
    cout << m1.Car << endl;
    return 0;
}