// Write a C++ program to capitalize the first character of each element of a given string vector. Return the vector.
// Example:
// Original Vector elements:
// red green black white Pink
// Capitalize the first character of each vector element:
// Red Green Black White Pink

#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> Cpatialize(vector<string>cap){
    for(string &i : cap){
        i[0] = toupper(i[0]);
    }
    return cap;
}
int main(){
    vector<string> cap = {"red","blue","white"};
    vector<string> sp = Cpatialize(cap);
    if(sp.empty()){
        cout << "Is Empty." << endl;
    }
    else{
        for(string i : sp){
            cout << i << " ";
        }
    }
}