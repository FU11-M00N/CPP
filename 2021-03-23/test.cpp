#include <iostream>
using namespace std;
class Rectangle {
public:
	int width, height;
	Rectangle();
	Rectangle(int w);
	Rectangle(int w, int h);
	~Rectangle();
	int getArea();
	int getArea2();
	bool isSquare();
};

Rectangle::Rectangle() {
	width = 1;
	height = 1;
}
Rectangle::Rectangle(int w) {
	width = w;
	height = w;
}
Rectangle::Rectangle(int w, int h) {
	width = w;
	height = h;
}
Rectangle::~Rectangle() {
	cout << "넓이가 " << getArea() << "입니다. 이제 소멸됩니다." << endl;
}

bool Rectangle::isSquare() {
	if (width == height) {
		cout << "넓이 : "<<getArea()<<" 둘레 : "<<getArea2()<<"  ";
		return true;
	}
	return false;
}


int Rectangle::getArea() {
	return width * height;
}

int Rectangle::getArea2() {
	return (width+height)*2;
}


int main() {
	Rectangle rect1;
	Rectangle rect2(3, 5);
	Rectangle rect3(3);

	if (rect1.isSquare()) cout << "rect1은 정사각형이다. 넓이 : " << rect1.getArea() << " 둘레 : " << rect1.getArea2() << endl;
	if (rect2.isSquare()) cout << "rect2는 정사각형이다. 넓이 : " << rect2.getArea() << " 둘레 : " << rect2.getArea2() << endl;
	if (rect3.isSquare()) cout << "rect3는 정사각형이다. 넓이 : " << rect2.getArea() << " 둘레 : " << rect3.getArea2() << endl;

	
}
