/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------
题目： 定义Location类表示坐标点，Circle类表示圆。成员属性
       方法的含义参看程序中注释。Circle从Location以公有方
       式派生。
       主函数中创建一个圆对象，显示缺省参数，重新输入坐标
       及半径，显示圆的各项参数。
-------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

class Location{
private:
    float x, y;//坐标值
/***********SPACE***********/
public:
    Location(float fx = 0, float fy = 0):x(fx),y(fy){}
    Location(Location &);//拷贝构造函数
    ~Location();//析构函数声明
    void SetX(float fx){x = fx;}//设置x
    void SetY(float fy){y = fy;}//设置y
    float GetX(){return x;}//设置x
    float GetY(){return y;}//设置y
    void DisplayXY(){cout << "坐标:" << "(" << x << "," << y << ")" << endl;}//显示坐标值
    virtual float GetArea() = 0;//虚函数计算面积
};

/***********SPACE***********/
Location::Location(Location &l){//拷贝构造函数
    x = l.x;
    y = l.y;
}

Location::~Location(){
    cout << "Location object destructed..." << endl;
}

class Circle:public Location{
private:
    float r;//圆的半径
public:
    static const float PI;//静态属性圆周率
    Circle(float ar = 0, float ax = 0, float ay = 0):Location(ax, ay),r(ar) {}//构造函数
    Circle(Circle &fr){r = fr.r;}//拷贝构造函数
    ~Circle();//析构函数
    void SetR(float ar){r = ar;}//设置半径
    float GetR(){return r;}//获得半径值
    float GetArea(){return PI * r * r;}//面积
/***********SPACE***********/
    float GetCirLen(){return 2.0f*PI*r;}//周长
    float GetDistence();//圆心距原点的距离。
    void DisplayR(){cout << "半径："<< r << endl;}//显示半径
};

/***********SPACE***********/
const float Circle::PI = 3.141592f;

Circle::~Circle(){
    cout << "Circle Object destructed..." << endl;
}

float Circle::GetDistence(){
    return sqrt(GetX() * GetX() + GetY() * GetY());
}

int main(void){
    float fR, fX, fY;
/***********SPACE***********/
    Circle objC;
    cout << "初始化后的参数：" << endl;
    objC.DisplayXY();
    objC.DisplayR();
    cout << "圆心距原点距离：" << objC.GetDistence() << endl;
    cout << "圆的面积：" ;
    cout << objC.GetArea() << endl;
    cout << "圆的周长：" ;
    cout << objC.GetCirLen() << endl;
    
    cout << "输入圆的坐标及半径：";
    cin >> fX >> fY >> fR;

    objC.SetX(fX);
    objC.SetY(fY);
    objC.SetR(fR);

    cout << "当前圆的参数：" << endl;
    objC.DisplayXY();
    objC.DisplayR();
    cout << "圆心距原点距离：" << objC.GetDistence() << endl;
    cout << "圆的面积：" ;
    cout << objC.GetArea() << endl;
    cout << "圆的周长：" ;
    cout << objC.GetCirLen() << endl;

    return 0;
}
