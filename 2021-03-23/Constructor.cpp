#include <iostream>
using namespace std;

/*
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
*/
class Rectangle{
public:
    int width,height;
    bool isSquare();
    Rectangle();
    Rectangle(int w);
    Rectangle(int w, int h);
};

Rectangle:: Rectangle(){
    width=1;
    height=1;
}
Rectangle:: Rectangle(int w){
    width=w;
    height=w;

}
Rectangle:: Rectangle(int w, int h){
    width=w;
    height=h;

}

bool Rectangle:: isSquare(){
    if(width==height){
        return true;
    }
    else{
        return false;
    }
    // -> 참트루
}

int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);

    if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;     
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;

    /*
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
    
    */
    return 0;
}

