#include<iostream>
using namespace std;

struct employee{
    int eId;
    char favChar;
    float salary;

};
int main(){
    
    employee harry;
    harry.eId = 1;
    harry.favChar = 'C';
    harry.salary = 12000.12;

    cout << harry.eId << endl;
    cout << harry.favChar << endl;
    cout << harry.salary << endl;
    
    return 0;
}