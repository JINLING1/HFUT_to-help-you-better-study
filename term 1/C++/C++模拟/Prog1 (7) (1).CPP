/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------

题目：球从高处下落，以一定速度接触到地面时，地面会给球一个
      力使球不让弹性形变，而后球内的气体会有一个使球恢复原
      状的力，这样在球恢复原状的过程中，球又会给地面一个力，
      而由于力的作用是相互的，同时地面又会给篮球一个力，正
      是靠这个力将球弹起。设一球从s米初始高度自由落下，每次
      落地后反跳回原高度的三分之二；再落下。
      通过函数fun求它在第n次落地时，共经过多少米？第n次反弹
      多高？
      函数fun参数：
      int n：计算弹跳的次数；
      float s：初始的高度；
      float &hn：第n次后一次反弹的高度的引用。
      返回值：float
      n次反弹经过的距离。
-------------------------------------------------------*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std; 
//函数原型声明 
void SaveRes(void);
float fun(int, float, float &);

float fun(int n, float s, float &hn){
/**********Program**********/
    





/**********  End  **********/
}

int main(void){ 
    float sn, s;
    float hn;
    int n;
    cout << "请输入初始高度：";
    cin >> s;
    cout << "请输入弹跳次数：";
    cin >> n;
    sn = fun(n, s, hn);
    cout << n << "次，共经过：" << sn << "米，最后一次弹起的高度是：" << hn << endl;   
          
    SaveRes();
  
    return 0;
}
//以下与编程无关，切勿修改，如果出现编译错误，是以上程序错误所致。
void SaveRes(void){
    
    fstream InFile, OutFile;
    float sn, s, hn;
        int n ;
        
    InFile.open("in24002.txt", ios::in);
    if(!InFile){
        cout << "Input File open error!";
        exit(1);
    }

    OutFile.open("out24002.txt", ios::out);
    if(!OutFile){
        cout << "Output File open error!";
        exit(2);
    }
    InFile >> n >> s;
    
    sn = fun(n, s, hn);
          OutFile << fixed << setprecision(3); 
    OutFile << sn << " " << hn << endl;

    InFile.close();
    OutFile.close();
}