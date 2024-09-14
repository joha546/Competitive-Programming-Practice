
// This pointer can be shared on multiple owners. It can assign one raw pointer to multiple owners.
#include<iostream>
#include<memory>
using namespace std;


class MyClass{
public:
    MyClass(){
        cout << "Constructor Invoked.." << endl;
    }

    ~MyClass(){
        cout << "Destructor Invoked.." << endl;
    }
};

int main(){
    shared_ptr<MyClass> shPtr1 = make_shared<MyClass>();
    // Since you have access to share the ownership, it has the count of all of the owners.
    // so, it has the count of all of the references to that pointer.
    shared_ptr<MyClass> shPtr2 = shPtr1;
    shared_ptr<MyClass> shPtr3 = shPtr1;
    cout << "Shared Count : " << shPtr1.use_count() << endl;

}

