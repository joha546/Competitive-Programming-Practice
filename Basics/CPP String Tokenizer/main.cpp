//  Example1 - 

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[] = "Introduction to Artificial Intelligence & LLMs:() a new field. Re-try";

    char *ptr;
    ptr = strtok(str, " :.-()");

    while(ptr != NULL){
        cout << ptr << endl;

        ptr = strtok(NULL, " :.-()");
    }
    return 0;
} 