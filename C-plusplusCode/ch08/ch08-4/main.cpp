#include <iostream>
#include <cmath>
using namespace std;
#include "Rectangle.h"
int main() {
    Rectangle rect; //定义Rectangle类的对象
    //设置矩形的数据
    rect.initRectangle(2, 3, 20, 10);   
    rect.move(3,2); //移动矩形位置
    cout << "The data of rect(x,y,w,h): " << endl;
    //输出矩形的特征参数
    cout << rect.getX() <<", "
        << rect.getY() << ", "
        << rect.getW() << ", "
        << rect.getH() << endl;
    return 0;
}