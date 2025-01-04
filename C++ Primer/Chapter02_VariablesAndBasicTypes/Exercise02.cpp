#include <iostream>
using namespace std;

int main(){
    
    int a = 4;
    const int *const p = &a;
    int *q = &a;
    a = 6;
    // *p = 7;
    const int b = 5;
    // int *p2 = &b;
    int c = b;



    return 0;
}