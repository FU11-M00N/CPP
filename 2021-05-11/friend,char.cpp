#include <iostream>
using namespace std;


class Oper {
   int num=0;
public:
   Oper() {};
   Oper(int num) { this->num = num; }
   void operator+=(int n) {
      this->num += n ;
   }

   void show() {
      cout << "현재 값 : " << num<<endl;
   }
   
};

class Color {
   int r=0, g=0, b=0;
public:
   Color(){}
   Color(int r, int g, int b) {
      this->r = r;
      this->g = g;
      this->b = b;
   }
   Color operator+(Color a) {
      Color tmp;
      tmp.r = this->r + a.r;
      tmp.g = this->g + a.g;
      tmp.b = this->b + a.b;

      return tmp;
   }

   bool operator==(Color a) {
      if (this->r == a.r && this->g == a.g && this->b == a.b) {
         return true;
      }
      return false;
      
   }

   friend Color operator+(int n, Color a);

   void show() {
      cout << this->r << " " << this->g << " " << this->b << endl;
   }
};

Color operator+(int n, Color a) {
   a.r += n;
   a.g += n;
   a.b += n;

   return a;
}

int main() {
   /*Oper p(5);
   int ch;
   while (true) {
      cout << "input number :";
      cin >> ch;
      if (ch < 0) break;
      p.operator+=(ch);
      p.show();
   }*/
   Color red(255, 0, 0), blue(0, 0, 255),green(0,250,10),c;
   c = red + blue;
   Color fuchsia(255, 0, 255);
   if (c == fuchsia) {
      cout << "보~라" << endl;
   }
   else {
      cout << "보~라 아님" << endl;
   }
   c = 5 + green;
   c.show();

}