/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：函数fun的功能是判断参数n（≤21亿）是否为升序数。升序数
      是指一个正整数（包括0），其从左到右的每一位数都大于等
      于前面的每一位数：
      n = d0d1d2..dm,升序数的条件是：d0≤d1≤d2...≤dm。
      如：12234是升序数， 0是升序数；13245不是升序数。
      编写函数实现升序数判断，需要对数据合法性进行验证，
      如果n是负数返回-1，是升序数返回1，不是升序数返回0。
-------------------------------------------------------*/

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int fun(int );
void SaveRes(void);

int fun(int n)
{
/***********************program*************************/
    




/*************************END***************************/
}

int main(void)
{
    int a[10] = {-412, 1023, 1234567, 9876543, 2234, 1987, 0, 345667, 81315, -1};
    int i;

    for (i = 0; i < 10; i++)
    {
        if(fun(a[i]) == 1)
        {
            cout << setw(10) << a[i] << " 是升序数！" << endl;
        }
        else if(fun(a[i]) == 0)
        {
            cout << setw(10) << a[i] << " 不是升序数！" << endl;
        }
        else
        {
            cout << setw(10) << a[i] << " 数据非法！" << endl;
        }
    }

    SaveRes();
    return 0;
}

void SaveRes(void)
{
    fstream inFile, outFile;
    int iBuff[6];
    int i;
    inFile.open("in0302.dat",ios::in);
    if(!inFile)
    {
        cout << "File open error!";
        exit(1);
    }

    outFile.open("out0302.dat",ios::out);
    if(!outFile)
    {
        cout << "File open error!";
        inFile.close();
        exit(1);
    }
    for(i = 0; i < 6; i++)
    {
       inFile >> iBuff[i];
    }

   
    for(i = 0; i < 6; i++)
    {
       outFile << fun(iBuff[i]) << " ";
    }
    inFile.close();
    outFile.close();   
}

