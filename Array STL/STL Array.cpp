#include<iostream>
#include<array>
using namespace std;
int main(){

    // method for creating array
    array<int,5> arr = {1,2,3,4,5};
    int size = arr.size();
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }

    // Methods
    // at();
    cout << "Element is at 4th index is: " << arr.at(4) << endl;

    // empty() ----? ans in boolean
    cout << "Array is Empty? " << arr.empty()  << endl;

    // front()
    cout << "First Element is: " << arr.front() << endl;

    // back()
    cout << "Last Element is: " << arr.back() << endl;

    // cout<<arr.cbegin()<<endl;
    return 0;
}