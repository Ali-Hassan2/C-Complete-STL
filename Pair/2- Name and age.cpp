#include <iostream>
using namespace std;

int main() {
    
    string name;
    unsigned int age;
    
    cout << "Enter the name: ";
    cin >> name;

    cout << "Enter the age: " ;
    cin >> age;

    pair<string,int> detail = {name,age};

    cout << "The name is: " << detail.first;
    cout << endl;
    cout << "The age is: " << detail.second;

    

    return 0;
}