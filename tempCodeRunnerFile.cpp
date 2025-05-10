#include<iostream>
using namespace std;
int vowel(string str){
    int vCount = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == 'a' || str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u')
        {
            vCount++;
        }
    }
    return vCount;
}

int main(){
    string str = "Ali Hassan";
    int res = vowel(str);
    cout << "Vowels are: " << res << endl;

    return 0;
}