#include <iostream>
#include <cctype>
#include <string>
#include <vector>
// #include <MQTTClient.h>


using namespace std;

void ex_02(){
    // 练习3.2：编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词
    cout << "练习3.2：编写一段程序从标准输入中一次读入一整行，然后修改该程序使其一次读入一个词" << endl;
    string line2;
    getline(cin,line2);
    cout << "刚才的输入是：" << line2 << endl;
    cout << "现在请尝试每次读入一个词，输入exit退出" << endl;
    string word2;
    string sentense2;
    while (cin >> word2)
    {
        cout << "刚才输入的单词是：" << word2 << endl;
        sentense2 = sentense2 + word2 + " ";
        if (word2 == "exit")
        {
            break;
        }
        
    }
    cout << "输入完毕，刚才输入的句子是：" << sentense2 << endl;
    std::cout << "=============================================================" << std::endl;
}

void ex_04(){
    // 练习3.4：编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串
    cout << "练习3.4：编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串" << endl;
    string line4_01, line4_02;
    cout << "请输入第一个字符串：" << endl;
    cin >> line4_01;
    cout << "请输入第二个字符串：" << endl;
    cin >> line4_02;
    if (line4_01 > line4_02)
    {
        cout << "第一个字符串较大，为：" << line4_01 << endl;
    }
    else if (line4_01 < line4_02)
    {
        cout << "第二个字符串较大，为：" << line4_02 << endl;
    }
    else{
        cout << "两个字符串大小相等" << endl;
    }
    std::cout << "=============================================================" << std::endl;
}

void ex_05(){
    // 练习3.5：编写一段程序从标准输入中读入多个字符串并将他们连接在一起，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来
    cout << "练习3.5：编写一段程序从标准输入中读入多个字符串并将他们连接在一起，输出连接成的大字符串。然后修改上述程序，用空格把输入的多个字符串分隔开来" << endl;
    cout << "和前面一样，略" << endl;
    std::cout << "=============================================================" << std::endl;
}

void ex_06(){
    // 练习3.6：编写一段程序，使用范围for语句将字符串内所有字符用X代替
    cout << "练习3.6：编写一段程序，使用范围for语句将字符串内所有字符用X代替" << endl;
    string line6;
    cout << "请输入字符串：" << endl;
    cin >> line6;
    // for (int i = 0; i < line6.size(); i++)
    // {
    //     line6[i] = 'X';
    // }
    for (char &c : line6)
    {
        c = 'X';
    }
    cout << line6 << endl;
}

void ex_10(){
    // 练习3.10：编写一段程序，读入一个字符串，然后去掉字符串中的标点符号
    cout << "练习3.10：编写一段程序，读入一个字符串，然后去掉字符串中的标点符号" << endl;
    string answer10;
    string line10;
    cout << "请输入字符串：" << endl;
    cin >> line10;
    for (auto &i : line10)
    {
        if (!ispunct(i))
        {
            answer10 = answer10 + i;
        }
        
    }
    cout << "去掉标点符号后的字符串为：" << answer10 << endl;

}

int main(){

    // ex_02();
    // ex_04();
    // ex_06();
    ex_10();
    return 0;
}