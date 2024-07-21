/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------

题目： 程序的功能是通过函数计算所有四位整数（1000~9999）中满足条件
      的数存放到函数参数p传递地址的数组中。函数返回满足条件数的个数。
条件如下:
      四位数的高三位组成的数是素数；四位数的个位数是7。千位数与百位
      数之和小于9。
      函数 isPrime 为素数判断函数，参数传递待判断的数，返回true为
      素数，false为和数。
      如：4437中443是质数，个位数是7,4+4 < 9。
-------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int fun(int *);//原型声明
bool isPrime(int);

int main(void)
{
    int a[100],iCount,i;
/***********SPACE***********/
    iCount = fun(a);
    cout << "The number is:" << iCount << endl;
    for(i = 0; i < iCount; i++)
    { 
        cout << a[i] << " ";
    }
    return 0;
}

int fun(int *p)
{
/***********SPACE***********/
    int n, a, b, count=0;
    for(n = 1000; n <= 9999; n++)
    {
        a = n / 1000;
/***********SPACE***********/
        b=n%1000/100;
/***********SPACE***********/
        if(n % 10 == 7 && 【?】 && (a + b)< 9)
        {
            p[count] = n;
            count++;
        }

    }
    return count;
}

bool isPrime(int n)
{
    int i;
    for(i = 2; i <= n / 2;i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
/***********SPACE***********/
    return true;
}
