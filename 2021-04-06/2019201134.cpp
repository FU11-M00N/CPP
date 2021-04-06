#include <iostream>
#include <string>
using namespace std;
// class Data{
// private:
//     int a; 
//     float b;
// public:
//     Data(){a=1; b=1.5;} // 기본생성자
//     ~Data(){} // 소멸자
//     void show();
//     Data(int a, float b);
//     Data(int a);
//     int getA();
//     float getB();
// };
// int Data::getA(){
//     return a;
// }
// float Data::getB(){
//     return b;
// }
// void Data::show(){
//     cout<<a<< "," <<b<<endl;

// }
// Data::Data(int a,float b){
//     this -> a=a;
//     this -> b=b;
   
// }
// Data::Data(int a){
//     this -> a=a;
// }
// class Circle{
// private:
//     int radius;
//     string circle_name;
// public:
//     Circle();
//     ~Circle(){};
//     void setRadius(int r, string name){
//         radius =r;
//         circle_name= name;
//     }
//     double getArea(){
//         double area;
//         area=3.14*radius*radius;
//         return area;
//     }

//     double dulre(){
//         double Round;
//         Round=2*3.14*radius;
//         return Round;
//     }
//     string getName();
//     void searchName(string check_name);
    
// };
// void Circle::searchName(string check_name){
//     if(circle_name==check_name){
//         cout <<circle_name<<"의 면적은"<<getArea();
//         cout << "의 둘레는" << dulre();
//     }
// }
// string Circle::getName(){
//     return circle_name;
// }

// Circle::Circle(){
//     radius=1;
// }
int main(){

       string a("I Love");
   a.append("C++");
   a.append("C++");
   cout << a << endl;
   cout << a.substr(2, 4) << endl;
   cout << a.find("v") << "," << a.find("C",8)<<endl;
   string b;
   cout << "문자 입력 :";
   getline(cin, b);
   cout << b << endl;
    // cout << "생성하고자 하는 원의 개수";
    // int n,radius;
    // string circle_name;
    // string search_circle;
    // cin >> n;
    // Circle *pArray = new Circle [n]; // n개의 Circle 배열 생성
    // for(int i=0; i<n; i++){
    //     cout << "원의 이름과 반지름은?" <<": "; //프롬프트 출력
    //     cin >> circle_name;
    //     cin >> radius;

    //     pArray[i].setRadius(radius,circle_name);// 각 Circle 객체를 반지름으로 초기화
        
    // }
   
    // Circle* p = pArray;
    // for(int i=0; i<n; i++){
    //     cout <<p->getName() <<"의 면적은 " <<p-> getArea() << ' '; //원의 면적 출력
    //     cout <<p->getName()<<"의 둘레는 "<< p->dulre() << ' ';

    //     cout <<endl;
    //     p++;
    // }
    // Circle*p2 = pArray;
    // cout << "검색하고자 하는 원의 이름은? : ";
    //     cin >> search_circle;
    // for(int i=0; i<n; i++){
    //     p2->searchName(search_circle);
    //     p2++;
    // }
         
    
    // delete [] pArray; // 객체 배열 소멸
    // cout << "입력할 정수의 개수";
    // int n;
    // cin >> n;
    // if( n <=0){
    //     return 0;
    // }
    // int *p = new int[n];
    // if(!p){
    //     cout <<"메모리 할당 불가";
    //     return 0;
    // }
    // for(int i=0; i<n; i++){
    //     cout << i+1 << "번째 정수:"; // 프롬프트 출력
    //     cin >> p[i];
    // }
    // int sum=0;
    // for(int i=0; i<n; i++){
    //     sum+= p[i];
    // }
    // cout <<"평균 = "<< sum/n <<endl;

    // delete[] p; // 배열 메모리 반환
    

    //  int *p;
    // p= new int[5];   
    // if(!p){
    //     cout <<"메모리 할당할 수 없습니다.";
    //     return 0;
    // }
    // for(int i=0; i<5; i++){
    //     p[i] = i;
    //     cout << "*p = " <<p[i] << '\n';
        
    // }
    
    // delete [] p;
        
    
    
    // Data d(5,6.7);
    // d.show();
    // Data *dp =&d;
    // dp-> show();

    // Data d2[3]= {Data(50,70.53), Data(50),Data()};
    // Data *d2p= d2;
    // for(int i=0; i<3; i++){
    //     d2[i].show();       
    //     d2p[i].show();
    //     d2[i].getA();
    //     d2[i].getB();
    // }
    
   

 
    
    return 0;
}