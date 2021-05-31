
#include <iostream>
using namespace std;

/*
class Test {
   int x=0, y=0;
public:
   Test(){   }
   Test(int x, int y) {
      this->x = x;
      this->y = y;
   }
   ~Test(){}
   void show() {
      cout << "x = " << x << ", y = " << y << endl;
   }
   //Test operator+(int k) {
   //   x += k;
   //   y += k;
   //}
   //Test operator-(int k) {
   //   x -= k;
   //   y -= k;
   //}
   Test operator+(int k) {
      x = this->x + k;
      y = this->y + k;
      return *this;
   }
   void operator-(int k) {
      x = this->x - k;
      y = this->y - k;
   }
   //void operator+(int k) {
   //   x = this->x + k;
   //   y = this->y + k;
   //}
};
*/


/*
class Test {
   int x=0, y=0;
public:
   Test(){   }
   Test(int x, int y) {
      this->x = x;
      this->y = y;
   }
   ~Test(){}
   void show() {
      cout << "x = " << x << ", y = " << y << endl;
   }
   //Test operator+(int k) {
   //   x += k;
   //   y += k;
   //}
   //Test operator-(int k) {
   //   x -= k;
   //   y -= k;
   //}
   Test operator+(int k) {
      x = this->x + k;
      y = this->y + k;
      return *this;
   }
   Test operator-(int k) {
      x = this->x - k;
      y = this->y - k;
      return *this;
   }
   Test operator+(Test op) {
      Test tmp;
      tmp.x = this->x+op.x;
      tmp.y = this->y+op.y;

      return tmp;
   }
   Test operator-(Test op) {
      Test tmp;
      tmp.x = this->x - op.x;
      tmp.y = this->y - op.y;

      return tmp;
   }
};

int main() {
   Test a(5, 3), b(6, 7),c(5,3), t,s;
   a.show();
   b.show();
   t.show();
   cout << "==============" << endl;
   a.operator+(5);
   a.show(); // x = 10, y = 8
   b.operator-(3);
   b.show(); // x = 3, y = 4
   t = a.operator+(b); // a.operator+(b)
   t.show();
   s = b - c;
   s.show();
   
    
}
*/
/*
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
/*
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
   /*
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
*/
class Data {
   int x = 0, y = 0;
public:
   Data(){}
   Data(int x, int y) {
      this->x = x;
      this->y = y;
   }
   void show() {
      cout << "x = " << this->x << " y = " << this->y << endl;
   }

   Data operator*(Data a1) {
      Data tmp;
      tmp.x = this->x * a1.x;
      tmp.y = this->y * a1.y;

      return tmp;
   }

   Data operator-(Data a1) {
      Data tmp;
      tmp.x = this->x - a1.x;
      tmp.y = this->y - a1.y;

      return tmp;
   }
};

class Book {
   string name;
   int price = 0, page = 0;
public:
   void show() {
      cout << "책명 = " << this->name 
         << " 가격 = " << this->price 
         << "총 페이지 수 ="<<this->page<<endl;
   }
   Book(string name, int price, int page){
      this->name = name;
      this->price = price;
      this->page = page;
   }

   Book operator+(int n) {
      this->price = this->price + n;
      return *this;
   }

   friend Book operator-(Book& a1,int n);
};

Book operator-(Book& a1,int n) {
   a1.price-=n;
   return a1;
}

int main() {
   Data a(35, 2), b(4, 5), c(5, 3), t;
   t = a - b * c;
   t.show();

   Book h("토지", 25000, 200), j("골든아워", 32000, 300);
   h.show();
   j.show();
   h + 7000;
   h.show();
   j - 2000;
   j.show();
}