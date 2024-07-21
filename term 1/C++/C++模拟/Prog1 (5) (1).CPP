/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：在主函数中定义一个整型的二维数组A[3][4]，利用二重循
      环从键盘录入数组A的每个元素。设计一个函数findmax，
      找出二维数组A中的某一列k，在所有列中，第k列的所有元
      素之和最大，返回该列的序号；在主函数中输出该列的序号
      和该列的所有元素。

-------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

using namespace std;
//函数原型声明
int findmax(int [][4], int);
void SaveRes(void);

int findmax(int (*b)[4], int n){ 
/**********Program**********/
   





/**********  End  **********/
}

int main(void){
    int A[3][4];
    int t;
    for(int i = 0; i < 3; i++){
        for(int j = 0;j < 4; j++){
            cin >> A[i][j];        
        }        
    }
    t = findmax(A, 3);
        
    cout << "最大列的下标："<< t << endl;
    cout << "各元素值：";
    for(int i = 0; i < 3; i++){
        cout << A[i][t] <<" ";
    }
    cout << endl;
    
    SaveRes();
    return 0;
}
//以下与编程无关，切勿修改，如果出现编译错误，是以上程序错误所致。
void SaveRes(void){
    
    fstream InFile, OutFile;
    int k;
    int p[4][4];     
    InFile.open("in24003.txt", ios::in);
    if(!InFile){
        cout << "File open error!";
        exit(1);
    }

    OutFile.open("out24003.txt", ios::out);
    if(!OutFile){
        cout << "File open error!";
        exit(2);
    }
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
              InFile >> p[i][j];
        }
        cout << endl;
    }

    k = findmax(p, 4);
  
    OutFile << k << endl;
    for(int i = 0; i < 4; i++){
        OutFile << p[i][k] <<" ";
    }
    InFile.close();
    OutFile.close();
}
