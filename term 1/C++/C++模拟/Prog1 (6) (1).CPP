/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：从键盘输入一个有n个元素的字符数组，通过函数fun分别统
      计其中的大写字母、小写字母、数字字符和其他字符的个数。
      函数fun的参数：
      p传递字符数组的首地址；
      arg1：记录大写字母个数的引用；
      arg2：记录小写字母个数的引用；
      arg3：记录数字字符个数的引用；
      arg4：记录其他字符个数的引用。
      函数的返回值：void
-------------------------------------------------------*/
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
//函数原型声明 
void SaveRes(void);
void fun(char *p, int &, int &, int &, int &);

void fun(char *p, int &arg1, int &arg2, int &arg3, int &arg4){
/**********Program**********/
    






/**********  End  **********/
}

int main(){
    char str[100];
    int i;
    int a = 0, b = 0, c = 0, d = 0;

    cin.getline(str, 100);
        
    fun(str, a, b, c, d);
        
    cout << "大写字母数量：" << a  << endl;
    cout << "小写字母数量：" << b  << endl;
    cout << "数字字符数量：" << c  << endl;
    cout << "其他字符数量："  << d  <<endl;
        
    SaveRes();
    return 0; 
}

//以下与编程无关，切勿修改，如果出现编译错误，是以上程序错误所致。
void SaveRes(void){
    
    fstream InFile, OutFile;
    char str[100];
    int iCount[4] = {0};
    
    InFile.open("in24001.txt", ios::in);
    if(!InFile){
        cout << "File open error!";
        exit(1);
    }

    OutFile.open("out24001.txt", ios::out);
    if(!OutFile){
        cout << "File open error!";
        exit(2);
    }
    InFile.getline(str, 100);

    fun(str, iCount[0], iCount[1], iCount[2], iCount[3]);
    
    for(int i = 0; i < 4; i++){
        OutFile << iCount[i] << " ";
    }
    InFile.close();
    OutFile.close();
}

