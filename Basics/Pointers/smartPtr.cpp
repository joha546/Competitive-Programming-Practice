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
    // creating unique pointer of int type and put data 25.

    /*unique_ptr<int> unPtr1 = make_unique<int>(25);
    // deferencing a unique pointer
    // cout << "Address of unPtr1: " << unPtr1.get()<<endl;
    // cout << *unPtr1 <<endl;
    
    unique_ptr<int> unPtr2 = move(unPtr1);   // Though the place where unPtr is in , it cannot be shared. 
    // so we can do as move ownership unPtr1 to unPtr2.
    cout << *unPtr2 << endl;
    // when you move the ownership one pointer to another , previous one becomes null ptr.
    cout << *unPtr1 << endl;   // it will through segmentation fault.
    */

   unique_ptr<MyClass> unPtr1 = make_unique<MyClass>();
   return 0;
}