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
};
double Circle::getArea(){
    return 3.14*radius*radius;
}

int Circle::ball(){
    return 5*radius*radius;
}

int main(){
    Circle donut;
    Rectangle rect;
    donut.radius=1;
    double area = donut.getArea();
    donut.radius=3;
    int soccer = donut.ball();
    cout<< "donut 면적은: " << area << endl;
    cout<< "ball : " << soccer << endl;
    rect.width=3;
    rect.height=5;
    cout << "사각형의 면적: "<< rect.getArea() << endl;
    return 0;
}

