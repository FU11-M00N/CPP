#include <iostream>
using namespace std;


class Animal {
   string name;
public:
   Animal(string name) { this->name = name; }
   Animal(){}
   virtual ~Animal(){}
   string getName() {
      return name;
   }
   virtual void speak() = 0;
   virtual void walk() = 0;
};

class Dog : public Animal{
   int age;
public:
   Dog(string name, int age) :Animal(name) { this->age = age; }
   void speak() {
      cout << getName()<<"의 나이는"<<age<<"살 멍멍" << endl;
   }
   void walk() {
      cout << getName() << "은 집을 지킨다." << endl;
   }
};

class Cat : public Animal {
   string color;
public:
   Cat(string name, string color) :Animal(name) { this->color = color; }
   void speak() {
      cout <<getName()<<"의 털 색은 "<< color<<"야옹" << endl;
   }
   void walk() {
      cout << getName() << "은 벽을 탄다." << endl;;
   }
};
class Chiken : public Animal {
   int legs;
public:
   Chiken(string name, int legs) :Animal(name) { this->legs = legs; }
   void speak() {
      cout <<getName()<<"의 다리수는"<<legs<< "개 꼬끼오" << endl;
   }
   void walk() {
      cout << getName() << "은 아침을 깨운다" << endl;
   }
};

int main() {
   Animal* ap=NULL;
   int ch;
   while (true) {
      cout << "선택(1.개 2. 고양이 3. 닭 0: 끝)" << endl;
      cin >> ch;

      if (ch == 1) {
         ap = new Dog("광태", 5);
      }
      else if (ch == 2) {
         ap = new Cat("쿠키", "red");
      }
      else if (ch == 3) {
         ap = new Chiken("덕광", 2);
      }
      else if (ch == 0) {
         break;
      }
      ap->speak();
      ap->walk();
   }
   
}



/*
#include <iostream>
using namespace std;

class Calculator {
public:
   virtual int add(int a, int b) = 0;
   virtual int subtract(int a, int b) = 0;
   virtual double average(int a[], int size) = 0;
   virtual float area(int a) = 0;
};

class GoodCalc : public Calculator {
public:
   int add(int a, int b) { return a + b; }
   int subtract(int a, int b) { return a - b; }
   double average(int a[], int size) {
      double sum = 0;
      for (int i = 0; i < size; i++) {
         sum += a[i];
      }
      return sum / size;
   }
   float area(int a) {
      return a * a * 3.14;
   }
};

class BadCalc : public Calculator {
public:
   int add(int a, int b) { return a + b; }
   int subtract(int a, int b) { return a - b; }
   double average(int a[], int size) {
      double sum = 0;
      for (int i = 0; i < size; i++) {
         sum += a[i];
      }
      return sum / size;
   }
   float area(int a) {
      return a * a * 3.14;
   }
};

int main() {
   int a[] = { 1,2,3,4,5 };
   Calculator* p = new GoodCalc();
   cout << p->add(2, 3) << endl;
   cout << p->subtract(2, 3) << endl;
   cout << p->average(a, 5) << endl;
   p = new BadCalc();
   cout << p->add(5, 7) << endl;
   cout << p->area(5) << endl;
   delete p;
}




/*
#include <iostream>
using namespace std;



class Shape {
protected:
   virtual void draw() {
      cout << "Shape::draw() called" << endl;
   }
public:
   void paint() {
      draw();
   }
};

class Circle : public Shape {
protected:
   virtual void draw(){
      cout << "Circle::draw() called" << endl;
   }
};

class Rect : public Shape {
protected:
   virtual void draw() {
      cout << "Rect::draw() called" << endl;
   }
};

class Line : public Shape {
protected:
   virtual void draw() {
      cout << "Line::draw() called" << endl;
   }
};



int main() {
   Shape* pShape = new Shape();
   pShape->paint();
   pShape = new Circle();
   pShape->paint();
   pShape = new Rect();
   pShape->paint();
   pShape = new Line();
   pShape->paint();
   delete pShape;

}

/*

#include <iostream>
using namespace std;



class Shape {
protected:
   virtual void draw() {
      cout << "Shape::draw() called" << endl;
   }
public:
   void paint() {
      draw();
   }
};

class Circle : public Shape {
protected:
   virtual void draw(){}
};

class Rect : public Shape {
protected:
   virtual void draw() {}
};

class Line : public Shape {
protected:
   virtual void draw() {}
};



int main() {
   Shape* pShape = new Shape();
   pShape->paint();
   delete pShape;

}


/*
#include <iostream>
using namespace std;

class Base {
public:
   virtual void f() {
      cout << "Base : f() called" << endl;
   }
};

class Derived :public Base {
public:
   void f() {
      cout << "Derived : f() called" << endl;
   }
};

int main() {
   Derived d, * pDer;
   pDer = &d;
   pDer->f();
   Base* pBase;
   pBase = pDer;
   pBase->f();
}

/*
#include <iostream>
using namespace std;

class Person {
   string name;
   int age;
public:
   Person() {};
   Person(string n, int a):name(n),age(a){}
   ~Person(){};
   string getName() {
      return name;
   }
   int getAge() {
      return age;
   }
};
class Student :virtual public Person {
   int score;
public:
   Student(int score) {
      this->score = score;
   }
   Student(string name, int age, int score) :Person(name, age) {
      this->score = score;
   }
   void show() {
      cout << "이름 : "<< getName() << "나이 : " << getAge() << "점수 : " << score << endl;
   }
};
class Worker :virtual public Person {
   int pay;
public:
   Worker(int pay) {
      this->pay = pay;
   }
   Worker(string name, int age, int pay):Person(name,age) {
      this->pay = pay;
   }
   void show() {
      cout << "이름 : " << getName() << " 나이 : " << getAge() << " 페이 : " << pay << endl;
   }

};
class GenData :public Student, public Worker {
   float h;
public:
   GenData(string name, int age, int score, int pay, float h) :Person(name, age), 
      Worker(pay),Student(score) {
      this->h = h;
   }
};

int main() {

   Student s("길동이", 22, 100);
   Worker w("지선이", 21, 2500000);
   s.show();
   w.show();
   Student p[] = { Student("현동",34,89), Student("경욱",27,78), Student("대원",52,98) };
   Student* sp = p;
   for (int i=0; i < sizeof(p)/sizeof(Student); i++) {
      sp->show(); sp++;
   }
   
   return 0;
}
/*
#include <iostream>
using namespace std;

class Person {
   string name;
   int age;
public:
   Person(string n, int a):name(n),age(a){}
   string getName() {
      return name;
   }
   int getAge() {
      return age;
   }
};
class Student :public Person {
   int score;
public:
   Student(string name, int age, int score) :Person(name, age) {
      this->score = score;
   }
   void show() {
      cout << "이름 : "<< getName() << "나이 : " << getAge() << "점수 : " << score << endl;
   }
};
class Worker :public Person {
   int pay;
public:
   Worker(string name, int age, int pay):Person(name,age) {
      this->pay = pay;
   }
   void show() {
      cout << "이름 : " << getName() << " 나이 : " << getAge() << " 페이 : " << pay << endl;
   }

};
int main() {

   Student s("길동이", 22, 100);
   Worker w("지선이", 21, 2500000);
   s.show();
   w.show();
   Student p[] = { Student("현동",34,89), Student("경욱",27,78), Student("대원",52,98) };
   Student* sp = p;
   for (int i=0; i < sizeof(p)/sizeof(Student); i++) {
      
      sp->show(); sp++; sp->show();
      sp++;
   }
   
   return 0;
}
*/