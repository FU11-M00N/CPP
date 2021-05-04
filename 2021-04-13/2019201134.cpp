#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void MAXMIN(int *p, int &MAX,int &MIN) {

   MAX = p[0];
   MIN = p[0];

   for (int i = 0; i < 10; i++) {
      if (MAX <= p[i]) {
         MAX = p[i];
      }
      if (MIN >= p[i]) {
         MIN = p[i];
      }
   }
}
int main() {
   srand(time(NULL));
   int i, MAX, MIN, ar[10];
   int *p;
   for (i = 0; i < 10; i++) {
      ar[i] = rand() % 100 + 1;
      cout << ar[i] << " ";
   }
   p = ar;
   cout << endl;
   MAXMIN(p, MAX, MIN);
   cout << "최대값 = " << MAX << " 최소값 = " << MIN << endl;
}










//class Circle {
//   int radius;
//public:
//   Circle();
//   Circle(int r);
//   ~Circle();
//   double getArea() { return 3.14 * radius * radius; }
//   int getRadius() { return radius; }
//   void setRadius(int radius) { this->radius = radius; }
//};
//
//Circle::Circle() {
//   radius = 1;
//   cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::Circle(int radius) {
//   this->radius = radius;
//   cout << "생성자 실행 radius = " << radius << endl;
//}
//
//Circle::~Circle() {
//   cout << "소멸자 실행 radius = " << radius << endl;
//}
//void increase(Circle c) {
//   int r = c.getRadius();
//   c.setRadius(r + 1);
//}
//void increase1(Circle* c) {
//   int r = c->getRadius();
//   c->setRadius(r + 1);
//}
//void increase2(Circle &c) {
//   int r = c.getRadius();
//   c.setRadius(r + 1);
//}
//int main() {
//   Circle waffle(30);
//   increase(waffle);
//   cout << waffle.getRadius() << endl;
//
//   Circle waffle1(30);
//   increase1(&waffle1);
//   cout << waffle1.getRadius() << endl;
//
//   Circle waffle2(30);
//   increase2(waffle2);
//   cout << waffle2.getRadius() << endl;
//}


















//void swap1(int x, int y) { // call by value
//   int temp = x;
//   x = y;
//   y = temp;
//}

//void swap2(int* x, int* y) {
//   int temp = *x;
//   *x = *y;
//   *y = temp;
//}

//void swap3(int &a, int &b) {
//   int temp = a;
//   a = b;
//   b = temp;
//}

//int main() {
//
//   int a = 3, b = 5;
//   cout << a << "," << b << endl;
//   swap1(a, b);
//   cout <<"call by value : "<< a << "," << b << endl;
//   swap2(&a, &b);
//   cout << "call by address : " << a << "," << b << endl;
//   swap3(a, b);
//   cout << "call by reference : " <<a << "," << b << endl;

   /* ************ call by value/ address/reference 중 하나 주관식 ****** */

   //int a = 5, b = 7;
   //cout << a << "," << b << endl;
   //swap(a, b);
   //cout << a << "," << b << endl;
   //string s1 = "apple", s2 = "banana";
   //cout << s1 << "," << s2 << endl;
   //swap(s1, s2);
   //cout << s1 << "," << s2 << endl;

//   return 0;
//}














// 임의의 문자 알아맞추기 게임
//int main() {
//   srand(time(NULL));
//   char ch;
//   string list[] = {
//      "apple", "bear", "banana", "C++", "hohoho"
//   };
//   int r = rand() % 5;
//   string str = list[r];
//   cout << "문자를 맞춰봐! >> ";
//   string res(str.length(), '_');
//   cout << res << endl;
//   int x = 0;
//   int startindex;
//   while (true) {
//      startindex = 0;
//      cout << "문자를 입력 : ";
//      cin >> ch;
//      while (true) {
//         x = str.find(ch, startindex);
//         if (x != -1) {
//            res[x] = ch;
//            startindex=x+1;
//         }
//         else {
//            break;
//         }
//      }
//      cout << res << endl;
//      if (str == res) {
//         cout << "성공" << endl;
//         break;
//      }
//      
//   }
//}









// 문자열을 입력받아 특정 문자가 몇 개 있는지?
//int main() {
//   
//   char a;
//   string str4;
//   cout << "영어로 문장을 입력하세여 >> ";
//   getline(cin, str4);
//   cout << "찾을 문자를 입력하세여 >> ";
//   cin >> a;
//   int startindex = 0;
//   int x = 0;
//   int count = 0;
//   while (true) {
//      x = str4.find(a, startindex);
//      if (x != -1) {
//         startindex=x+1;
//         ++count;
//      }
//      else {
//         break;
//      }
//   }
//   cout << endl << "'" << a << "' 문자는 " << count << "개 있습니다.";
//}














//int main() {
//   char c = 'A';
//   string str = "Apple pear";
//   string str2("Banana");
//   string str3;
//   getline(cin, str3);
//   cout << str << str2 << "," << str3 << endl;
//   str2.append("orange");
//   cout << str2 << endl;
//   if (str == str2)
//      cout << "같다" << endl;
//   string* p = new string("C++");
//   cout << *p << endl;
//   p->append(" Goood~");
//   cout << *p << endl;
//   
//   
//   int x = str.find("z", 3);
//   // find 시험문제 냄 'ㅅ' 호잇
//   cout << x << endl;
//   delete p;
//}