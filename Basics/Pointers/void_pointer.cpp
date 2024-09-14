#include<iostream>
using namespace std;

void printNumber(int *numberPtr){
    cout << *numberPtr << endl;
}

void printchar(char *charPtr){
    cout << *charPtr << endl;
}


// void pointer function
void print(void *ptr, char type){  // type parameter will store the type of parameter we're passing.
    switch(type){
        case 'i':{
            cout << *((int*)ptr) <<endl;
            break;
        }// handle int*
        case 'c': {
            cout << *((char*)ptr) <<endl;
            break;
        } // handle char*

    }

}
int main(){
    int number = 5;
    char letter = 'a';
    // printNumber(&number);
    // printchar(&letter);
    print(&number, 'i');
    print(&letter, 'c');
    return 0;
}