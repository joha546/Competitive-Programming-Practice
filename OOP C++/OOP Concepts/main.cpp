#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int age;
    bool gender;

    void printInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }
};
int main(){

    // Array of Objects.
    // int n;
    // cin >> n;
    Student s[100];  // Though expression must have constant value so that we've to choose a bigger value to initialize the array of object.
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >>s[i].name;
        cin >> s[i].age;
        cin >> s[i].gender;
    }

    for(int i=0; i<n; i++){
        s[i].printInfo();
    }

    // Normal Objects.
    // Student s;
    // cin >> s.name;
    // cin>> s.age;
    // cin >> s.gender;

    // s.printInfo();
    return 0;
}