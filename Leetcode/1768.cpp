#include <iostream>
#include <string>  // 包含 string 头文件
#include <cstring>
using namespace std;

string mergeAlternately(string word1, string word2) {
        int len1 = word1.size();
        int len2 = word2.size();
        string answer (len1+len2, 'x');
        for(int i=0; i<=len1 && i<=len2; i++){
            answer[2*i] = word1[i];
            answer[2*i+1] = word2[i];
        }
        if(len1<=len2){
            for(int j=len1; j<len2; j++){
                answer[len1+j] = word2[j];
            }
        }
        else{
            for(int j=len2; j<len1; j++){
                answer[len2+j] = word1[j];
            }
        }
        return answer;
    }

int main(){
    string word1 = "abcd";
    string word2 = "pq";
    string answer = mergeAlternately(word1, word2);
    cout << answer << endl;
    return 0;
}