#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canRearranged(vector<int> vec){
    for(int i : vec){
        if(vec[i] < vec[i+1]){
            vec[i] = vec[i];
        }
        else{
            vec[i] = vec[i+1];
            return true;
        }
    }
    return false;
}
bool secondWay(vector<int> vec){
    vector<int>sortVec = vec;
    sort(sortVec.begin(),sortVec.end()); 
    // Sorted
    return vec == sortVec;
}
int main(){
    
    vector<int> vec = {1,2,5,7,4,3,6};
    bool val = canRearranged(vec);

    cout << val << endl;

    return 0;
}