#include <iostream>
using namespace std;

void ex_08(){
    // C++Primer练习1.8：指出下列哪些输出语句是合法的（如果有的话）：
    std::cout << "C++Primer练习1.8：指出下列哪些输出语句是合法的（如果有的话）" << std::endl;
    std::cout << "/*" ;
    std::cout << "*/";
    std::cout << /* "*/" */";
    std::cout << /* "*/" /* "/*" */;
    std::cout << std::endl;
    std::cout << "=============================================================" << std::endl;
}

void ex_09(){
    // C++Primer练习1.9：编写一段程序，使用while循环将50到100的整数相加
    std::cout << "C++Primer练习1.9：编写一段程序，使用while循环将50到100的整数相加" << std::endl;
    int i9 = 50, sum9 = 0;
    while (i9 <= 100)
    {
        sum9 = sum9 + i9;
        i9++;
        // std::cout << "当前加入：" << i9 <<"，总和为：" << sum9 << std::endl;
    }
    std::cout << "50到100的整数相加结果为：" << sum9 << std::endl;
    std::cout << "=============================================================" << std::endl;
}

void ex_10(){
    // C++Primer练习1.10：编写程序，使用递减运算符按递减顺序打印出10到0之间的整数
    std::cout << "C++Primer练习1.10：编写程序，使用递减运算符按递减顺序打印出10到0之间的整数" << std::endl;
    int i10 = 10;
    while (i10 >= 0)
    {
        std::cout << i10 << " ";
        i10--;
    }
    std::cout << std::endl;
    std::cout << "=============================================================" << std::endl;
}

void ex_11(){
    // C++Primer练习1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数
    std::cout << "C++Primer练习1.11：编写程序，提示用户输入两个整数，打印出这两个整数所指定的范围内的所有整数" << std::endl;
    int i11_1, i11_2;
    std::cout << "请输入两个整数：" << std::endl;
    std::cin >> i11_1 >> i11_2;
    if (i11_1 > i11_2)
    {
        int temp = i11_1;
        i11_1 = i11_2;
        i11_2 = temp;
    }
    while (i11_1 <= i11_2)
    {
        std::cout << i11_1 << " ";
        i11_1++;
    }
    std::cout << std::endl;
    std::cout << "=============================================================" << std::endl;
}

int main(){
    
    ex_08();
    ex_09();
    ex_10();
    ex_11();

    return 0;
}
