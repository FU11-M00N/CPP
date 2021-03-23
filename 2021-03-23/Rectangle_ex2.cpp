#include <iostream>
using namespace std;


class Rectangle{
public:
    int width,height;
    bool isSquare();
    int getdol();
    int getnulb();
    Rectangle();
    Rectangle(int w);
    Rectangle(int w, int h);
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
   



    return 0;
}

