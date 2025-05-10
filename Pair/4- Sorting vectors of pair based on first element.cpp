#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    vector<pair<int,int>> pairs = {{4,2},{5,1},{1,3},{2,50}};

    int size = pairs.size();

    for(int i = 0; i < size - 1; ++i){
        for(int j = 0; j < size - i - 1; j++){
            if(pairs[j].first > pairs[j+1].first){
                pair<int,int> temp = pairs[j];
                pairs[j] = pairs[j+1];
                pairs[j+1] = temp;
            }
        }
    }

    for (auto num : pairs)
    {
        cout << num.first << endl;
        cout << num.second << endl;  
    }

    
    return 0;
}