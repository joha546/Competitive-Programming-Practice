#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

int main(){

    char input_source[] = "I so much love computer Programming. Especially c++ programming language";

    char *ptr;
    ptr = strtok(input_source, ".");

    // Create a vector here of type char, name it txt
    vector<char *> txt;

    // Now, do a while loop over the vector container
    while(ptr != nullptr){
        txt.push_back(ptr);
        ptr = strtok(nullptr, ".");
    }

    // Output the container to the console with a for loop
    for(auto i=0; i<txt.size(); i++){
        cout << txt[i] << endl;
    }

    // Count the tokens in the string or input source
    cout << "The text file contains: " << txt.size() << " tokens." << endl;
    return 0;
}