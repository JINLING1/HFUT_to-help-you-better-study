/*-------------------------------------------------------
【程序填空】
---------------------------------------------------------
功能： 程序定义一个坐标类Location，并由此公有派生矩形类Rectangle。
      类中定义了构造函数、拷贝构造函数、析构函数等，见注释。
      主函数定义R1对象及基类的指针。输入矩形坐标x, y及矩形的h, w,
      显示矩形参数（左下坐标、高、宽），并通过基类指针输出面积。
-------------------------------------------------------*/
#include <iostream>
using namespace std;

class Location{//定义坐标类
private:
    double x,y;
public:
    Location(double xAug = 0.0, double yAug = 0.0):x(xAug), y(yAug){}//构造函数
    Location(Location &);//拷贝构造函数
        
    ~Location(){cout << "Loccation析构......" << endl;}//析构函数
    void SetX(double xAug){ x = xAug;}//设置x坐标
    void SetY(double yAug){ y = yAug;}//设置y坐标
    double GetX(void){return x;}//返回x坐标
    double GetY(void){return y;}//返回y坐标
    void DisplayL(void);//显示坐标
    virtual double GetArea() = 0;//面积虚函数
};
void Location::DisplayL(void){
    cout << "坐标：(" << x << "," << y << ")" << endl;
}
/***********SPACE***********/
Location::Location(【?】){//拷贝构造函数实现
    x = obj.x;
    y = obj.y;
}
/***********SPACE***********/
class Rectangle:【?】{//从Location类派生矩形类
private:
    double  h, w;//私有属性：矩形的高和宽
public:
    Rectangle(double xAug = 0., double yAug = 0., double hArg = 0., double wArg = 0.):Location(xAug, yAug),h(hArg), w(wArg){}
    Rectangle(Rectangle &obj){h = obj.h; w = obj.w;}//拷贝构造函数
    ~Rectangle(){cout << "Rectangl析构......" << endl;}//析构函数
    void SetH(int hArg){h = hArg;}
    void SetW(int wArg){w = wArg;}
    double GetX(void){return h;}
    double GetY(void){return w;}
    void DisplayR(void);
/***********SPACE***********/
    virtual double GetArea(){return 【?】;}//多态面积函数
};

void Rectangle::DisplayR(){//显示矩阵参数：左下坐标，高和宽。
    cout << "矩形参数：" << endl;
    this -> DisplayL();
    cout << "高宽：(" << h << "," << w << ")" << endl;
}

int main(void){
/***********SPACE***********/
    【?】;
    Location *p = NULL;
    double a, b;
         
    cout << "输入坐标：";
    cin >> a >> b;
    R1.SetX(a);
    R1.SetY(b);

    cout << "输入高宽：";
    cin >> a >> b;
    R1.SetH(a);
    R1.SetW(b);
    R1.DisplayR();
/***********SPACE***********/
    【?】 = &R1;
    cout << "矩形面积：" << p -> GetArea() << endl;
    return 0;
}
