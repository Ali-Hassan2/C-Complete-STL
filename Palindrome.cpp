#include<iostream>
using namespace std;

bool checkPalindrome(string str){
    for (int i = 0; i < str.size(); i++){
        if(str[0] == str[str.size()-1]){
            return true;
        }
    }
    return false;
}
int main(){
    string str = "racer";
    bool value = checkPalindrome(str);
    cout << value << endl;
    return 0;
}