/*-------------------------------------------------------
【程序设计】
---------------------------------------------------------
题目：声明并实现一个名为Person的基类，Person类有数据成员
name（姓名，string类型）、sex（性别，char类型，'M'表示男，
'F'表示女）。定义有参构造函数，将姓名、性别设置为给定的参
数；定义成员函数print，输出姓名和性别, 用虚函数方式设计。
    从Person类派生出Student类，Student类有数据成员status
（状态，string类型），表示年级（Freshman、Sophomore、Junior、
Senior），表示大一、大二、大三、大四学生。定义有参构造函数，
将姓名、性别、状态设置为给定的参数；重新定义成员函数print，
print函数输出姓名、性别和状态（输出完状态回车）。
    从Person类派生出Faculty类，Faculty类有私有数据成员title
（职称，string类型），包括（Professor、Associate_Professor、
Lecture）等职称，表示教授、副教授、讲师。定义有参构造函数，
将姓名、性别、级别设置为给定的参数；重新定义成员函数print，
输出姓名、性别和职称（输出完职称回车）。
   主函数中分别创建学生对象，职员对象，通过基类Person类的
指针调用print函数实现学生对象和职员对象相应信息的输出。
输出样例：
Name:Lihua, Sex:M
status:Freshman
Name:Wangling, Sex:F
title:Professor
其中逗号是英文，后有一个空格！
-------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

/**********Program**********/





/**********  End  **********/

int main(void){
    Person *p;
    Student s("Lihua", 'M', "Freshman");
    Faculty f("Wangling",'F', "Professor");
    p = &s;
    p -> print();
    p = &f;
    p -> print();
    return 0;
}
