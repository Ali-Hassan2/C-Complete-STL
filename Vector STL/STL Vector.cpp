#include<iostream>
#include<vector>
using namespace std;
int main()
{

    // way one of making the vector if i dont know the size
    vector<int> vec;


    // way to of making the vector if i know the size (size, initializer default will zero)
    vector <int> vec2(5,1); 
    cout << "The vector 2: " << endl;
    for(int j : vec2){
        cout << j << " ";
    } cout << endl;


    // if i want to copy the vec2 in the vec3 then i can do this
    vector <int> vec3(vec2);
    cout << "The vector 3 is: " << endl;
    for(int k : vec3){
        cout << k << " ";
    } cout << endl;
    cout << "Capacity --> " << vec.capacity() << endl;

    // adding value
    vec.push_back(1);

    cout << "Capacity --> " << vec.capacity() << endl;

    vec.push_back(2);
    
    cout << "Capacity --> " << vec.capacity() << endl;

    // it has doubled its size
    vec.push_back(3);
    
    cout << "Capacity --> " << vec.capacity() << endl;

    // This size of the vector will be 3
    cout << "The Size of the vector is: " << vec.size() << endl;

    // can use the at();
    cout << "The Element at the index 2 is: " << vec.at(2) << endl; 

    // front()
    cout << "The front element is: " << vec.front() << endl;

    // back()
    cout << "The back element is: " << vec.back() << endl;

    // can pop the element so the last element willl be poped from the vector
    cout << "Before the Pop operation: " << endl;
    for(int i:vec){
        cout << i << " ";
    } cout << endl;

    vec.pop_back();
    // Last Element got poped
    cout << "After Pop." << endl;
    
    for(int i : vec){
        cout << i << " ";
    } cout << endl;

    // if i use the clear() methiod then it will make the size of the vector zero but not the capacity zero

    cout << "The size of the Vector before Clear: " << vec.size() << endl;
    vec.clear();
    cout << "The size of the Vector After Clear: " << vec.size() << endl;

    return 0;
}