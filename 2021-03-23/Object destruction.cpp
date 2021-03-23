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
    int getdol();
    int getnulb();
    Rectangle();
    Rectangle(int w);
    Rectangle(int w, int h);
    ~Rectangle();
};
int Rectangle:: getdol(){
    
    return (width+height)*2;
    
}
int Rectangle:: getnulb(){
    return (width*height);
} 
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
// 둘레 = 가로 + 세로 * 2
// 넓이 = 가로 * 세로
}
Rectangle:: ~Rectangle(){
    cout << "소멸 되었니? " << getnulb() <<endl;
    
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

//다음 main() 함수가 잘 작동하도록 Rectangle 클래스를 작성하고 프로그램을 완성하라.
//Rectangle 클래스는 width와 height의 두 멤버 변수와 3 개의 생성자, 그리고 isSquare()
//함수를 가진다.


int main(){
    Rectangle rect1;
    Rectangle rect2(3,5);
    Rectangle rect3(3);
    if(rect1.isSquare()) cout << "rect1은 정사각형이다." <<" 둘레 : " << rect1.getdol() <<"넓이 :"<< rect1.getnulb() << endl;
    if(rect2.isSquare()) cout << "rect2은 정사각형이다." <<" 둘레 : "<< rect2.getdol() <<"넓이 :"<< rect2.getnulb() << endl;     
    if(rect3.isSquare()) cout << "rect3은 정사각형이다." <<" 둘레 : "<< rect3.getdol() <<"넓이 :"<< rect3.getnulb() << endl;
   


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

