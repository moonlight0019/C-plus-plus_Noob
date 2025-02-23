#include <string>
#include <iostream>
#include <unordered_map>
using namespace std;

// 第一种思路：暴力法
char findTheDifference(string s, string t) {
    int lens = s.size();
    for(int i=0; i<lens; i++){
        for(int j=0; j<lens+1; j++){
            if(s[i] == t[j]){
                s[i] = t[j] = '0';
            }
        }
    }
    for(int k=0; k<lens+1; k++){
        if (t[k] != '0'){
            return t[k];
        }
    }
    return '\0';    
}

// 第二种思路：使用哈希表
char findTheDifference2(string s, string t){
    unordered_map<char, int> count;
    for(char c : s){
        count[c]++;
    }
    for(char c : t){
        if(count[c] == 0){
            return c;
        }
        count[c]--;
    }
    return '\0';
}

int main(){
    string s = "abcd";
    string t = "abcde";
    char answer = findTheDifference(s, t);
    cout << "The answer is " << answer << endl;
    return 0;
}