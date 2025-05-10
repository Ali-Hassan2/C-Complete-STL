#include<iostream>
using namespace std;

string Reverse(string str){
    int start = 0;
    int end = str.length() - 1;
    while (start <= end){
        int temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    return str;
}

int main(){
    string str = "ali hassan";
    string res = Reverse(str);
    cout << "The Reverse string is: " << res << endl;
}