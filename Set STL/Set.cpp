#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int>s;
    // the data will be stored uniquely i i insert 5 10 time it will be stored for just one time
    // The data will be stored in the sorted manner
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    // The output will be 0 1 2 5 6

    for(auto i : s){
        cout << i << " ";
    }cout << endl;

    // Erasing a element 2nd element
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i : s){
        cout << i << endl;
    }cout << endl;

    cout << "Is 5 is present: " << s.count(5) << endl;
    cout << "Is 6 is present: " << s.count(6) << endl;
    return 0;

}
