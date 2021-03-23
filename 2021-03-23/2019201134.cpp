#include <iostream>
using namespace std;

class Rectangle{
public:
    int width,height;
    int getArea();
};

int Rectangle::getArea(){
    return width*height;
}

class Circle{
public:
    int radius;
    double getArea();
    int ball();
    Circle();
    Circle(int r);
};
double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle::Circle(){
    radius=1;
    cout <<"반지름" << radius << "원 생성" << endl;
}

Circle::Circle(int r){
    radius=r;
    cout <<"반지름" << radius << "원 생성" << endl;
}


int main(){
    Circle donut;
    Rectangle rect;
    donut.radius=1;
    double area = donut.getArea();
    donut.radius=3;

    cout<< "donut 면적은: " << area << endl;
    rect.width=3;
    rect.height=5;
    cout << "사각형의 면적: "<< rect.getArea() << endl;


    Circle pizza(20);
    area=pizza.getArea();
     cout << "피자의 면적: "<< pizza.getArea() << endl;
    return 0;
    return 0;
}

