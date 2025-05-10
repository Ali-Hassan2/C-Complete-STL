#include <iostream>
using namespace std;

int main() {
    
  

    pair<int,int> p = {1,2};

    int temp = p.first;
    p.first = p.second;
    p.second = temp;

    cout << "After swaping the p.first the value is: " << p.first << endl;
    cout << "After swaping the p.second the value is: " << p.second << endl;
    return 0;
}