/*-------------------------------------------------------
【程序改错】
---------------------------------------------------------
题目：函数fun的功能是将参数p传入的字符串实现如下处理：
      1.将p所指向字符串中的数字字符，按顺序提取存放到参数
      q所指向的字符数组中。
      2.删除p所指向的字符数组中的非字母符号。
      主函数中调用函数验证。如输入：
      Hello! Python123.io pass345!
      输出结果为：
      HelloPythoniopass
      123345
      并将结果写入out.dat文件。
-------------------------------------------------------*/

#include <iostream>
#include <cstdlib>

using namespace std;

void fun(char *, char *);

int main(void)
{
    char stra[80],strd[80];
    

    cout << "Input string";
    cin.getline(stra, 80);
/***********FOUND***********/
    fun(stra[80], strd[80]);
    cout << stra << endl;
    cout << strd << endl;

    return 0;
}


void fun(char *p, char *q)
{
    int i, j, k;

    i = 0;
    j = 0;
    k = 0;
/***********FOUND***********/
    while(p[i]!='0')
    {
/***********FOUND***********/
        if(p[i] >= 0  && p[i] <= 9)
        {
/***********FOUND***********/
            p[k] = p[i];
            k++;
        }
        if ( (p[i] >= 'A' && p[i] <= 'Z') || (p[i] >= 'a' && p[i] <= 'z'))
        {
            p[j] = p[i];
/***********FOUND***********/
            i++;
        }
        i++;
    }
    p[j] = '\0';

    q[k] = '\0';

}
