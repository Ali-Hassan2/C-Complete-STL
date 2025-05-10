#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 10;
    cout << "Before Swaping." << endl;
    cout << "a is: " << a <<endl;
    cout << "b is: " << b << endl;
    int temp = b;
    b = a;
    a = temp;
    cout << "a is: " << a <<endl;
    cout << "b is: " << b << endl;
}