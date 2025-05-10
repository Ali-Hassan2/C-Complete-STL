#include <iostream>
using namespace std;

int main() {
    pair <int, int> arr[] = {{1,2},{2,3},{1,1}};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max1 = INT32_MIN;
    int max2 = INT32_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i].second > max1){
            max2 = max1;
            max1 = arr[i].second;
        }
        else if(arr[i].second > max2 && arr[i].second != max1){
            max2 = arr[i].second;
        }
    }

    cout << "The maximum second number in the pair array is: " << max2 << endl;
    return 0;
}