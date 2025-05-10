#include <iostream>
using namespace std;

int main() {
    
    // syntax for creating a pair

    pair<int, int> pairing = {1,3};

    cout << "The first element of pairing is: " << pairing.first << endl;

    cout << "The second element is : " << pairing.second << endl;


    // second element is of pair type means {int, pair }  -> {1, {1,2}};

    pair<int, pair<int,int>> complex = {1,{2,3}};

    cout << "The first element is: " << complex.first << endl;
    cout << "The second element is: " << complex.second.first << endl;
    cout << "The second element is: " << complex.second.second << endl;

    // array creation of pair

    pair<int,int> arr[] = {{1,2},{2,3},{4,5}};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        cout << arr[i].first << endl;
        cout << arr[i].second << endl;
    }


    return 0;
}