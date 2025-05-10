//  Write a C++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.
#include<iostream>
#include<vector>
using namespace std;

vector<int> vecCheck(vector<int>vec){
    vector<int> res;
    for(int k : vec){
        if(vec[k] < vec[k + 1] && vec[k] < vec[k-1]){
            res.push_back(vec[k]);
        }
    }
    return res;
}
int main(){
    vector<int> vec = {1,2,5,0,3,1,7};
    vector<int> result = vecCheck(vec);
    if(result.empty()){
        cout << "no element found." << endl;
    }
    else{
        for(int k:result){
            cout << k << " ";
        }
    }
    return 0;
}