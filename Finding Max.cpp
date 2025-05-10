#include<iostream>
using namespace std;
int findingMax(int arr[], int size){
    int max = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[6] = {1,2,3,6,5,4};
    int maxValue = findingMax(arr,6);
    
    cout << "The maximum value in the array is: " << maxValue << endl;
    return 0;
}