#include <vector>
#include <string>
#include <iostream>
using namespace std;


int strStr(string haystack, string needle) {
    int n = haystack.size();
    int m = needle.size();
    if (m == 0) return 0;  // 如果 needle 为空，返回 0

    // 构建 next 数组
    vector<int> next(m, 0);
    next[0] = -1;
    int i = 0, j = -1;
    while (i < m - 1) {
        if (j == -1 || needle[i] == needle[j]) {
            i++;
            j++;
            next[i] = j;
        } else {
            j = next[j];
        }
    }
    // 输出 next 数组
    for (int i = 0; i < m; i++) {
        cout << next[i] << " ";
    }
    // 匹配过程
    i = 0, j = 0;
    while (i < n && j < m) {
        if (j == -1 || haystack[i] == needle[j]) {
            i++;
            j++;
        } else {
            j = next[j];
        }
    }

    // 判断是否匹配成功
    if (j == m) {
        return i - j;  // 返回匹配的起始下标
    } else {
        return -1;  // 未找到匹配
    }
};

int main(){
    string haystack = "fabbabab";
    string needle = "abab";
    int answer = strStr(haystack, needle);
    cout << "The answer is " << answer << endl;
    return 0;
}