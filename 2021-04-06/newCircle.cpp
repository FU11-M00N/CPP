#include <iostream>
#include <string>
using namespace std;
class Circle{
private:
    int radius;
    string circle_name;
public:
    Circle();
    ~Circle(){};
    void setRadius(int r, string name){
        radius =r;
        circle_name= name;
    }
    double getArea(){
        double area;
        area=3.14*radius*radius;
        return area;
    }

    double dulre(){
        double Round;
        Round=2*3.14*radius;
        return Round;
    }
    string getName();
    void searchName(string check_name);
    
};
void Circle::searchName(string check_name){
    if(circle_name==check_name){
        cout <<circle_name<<"의 면적은"<<getArea();
        cout << "의 둘레는" << dulre();
    }
}
string Circle::getName(){
    return circle_name;
}

Circle::Circle(){
    radius=1;
}
int main(){
    cout << "생성하고자 하는 원의 개수";
    int n,radius;
    string circle_name;
    string search_circle;
    cin >> n;
    Circle *pArray = new Circle [n]; // n개의 Circle 배열 생성
    for(int i=0; i<n; i++){
        cout << "원의 이름과 반지름은?" <<": "; //프롬프트 출력
        cin >> circle_name;
        cin >> radius;

        pArray[i].setRadius(radius,circle_name);// 각 Circle 객체를 반지름으로 초기화
        
    }
   
    Circle* p = pArray;
    for(int i=0; i<n; i++){
        cout <<p->getName() <<"의 면적은 " <<p-> getArea() << ' '; //원의 면적 출력
        cout <<p->getName()<<"의 둘레는 "<< p->dulre() << ' ';

        cout <<endl;
        p++;
    }
    Circle*p2 = pArray;
    cout << "검색하고자 하는 원의 이름은? : ";
        cin >> search_circle;
    for(int i=0; i<n; i++){
        p2->searchName(search_circle);
        p2++;
    }
         
    delete [] pArray; // 객체 배열 소멸
    
    return 0;
}