// mysqrt.cpp

#include "MathFunctions.h"  // 包含 MathFunctions.h 头文件
#include <cmath>             // 引入 cmath 库中的 sqrt 函数，如果要使用标准的平方根函数

// 这里我们手动实现一个平方根函数，也可以直接用 std::sqrt
double mysqrt(double x) {
    if (x < 0) {
        return -1;  // 如果输入为负数，返回错误值
    }
    
    double epsilon = 0.0001; // 误差范围
    double guess = x / 2.0;  // 初始猜测值

    // 使用牛顿法求解平方根
    while (std::abs(guess * guess - x) > epsilon) {
        guess = (guess + x / guess) / 2.0;
    }

    return guess;
}
