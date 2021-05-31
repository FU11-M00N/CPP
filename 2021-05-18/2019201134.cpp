#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Product {
protected :int id, price;
public:
    Product(int id, int price){
        this->id = id;
        this->price = price;
    }
};
class Book : public Product {
protected:
    string isbn;
    string bookname;
public:
    Book(int id, int price, string isbn, string bookname):Product(id,price){
        this->isbn = isbn;
        this->bookname = bookname;
    }
};
class Disk : virtual Product {

};
class MobileBookDisk : public Book{
private:
    string lang;
public:
    MobileBookDisk(int id, int price, string isbn, string bookname, string lang):
        Book(id, price, isbn, bookname)
    {
        this->lang = lang;
    }
    void show() {
        cout << id << bookname << lang << isbn << price;
    }
};

int main() {
    MobileBookDisk mb(1, 23000, "11-22-33", "토지", "한국어");
    mb.show();
    
}

/*
class Adder {
protected:
    int add(int a, int b) {
        return a + b;
    }
};

class Subtractor {
protected:
    int minus(int a, int b) {
        return a - b;
    }
};

class multiply{
protected:
    int mul(int a, int b) {
        return a * b;
    }    
};

class division{
protected:
    int div(int a, int b) {
        return a / b;
    }
};
class Remainder{
protected:
    int rema(int a, int b) {
        return a % b;
    }
};

class Calculator : public Adder, public Subtractor,multiply,division,Remainder {
public:
    int calc(char op, int a, int b);
};

int Calculator::calc(char op, int a, int b) {
    int res = 0;
    switch (op) {
        case '+': res = add(a, b); break;
        case '-': res = minus(a, b); break;
        case '*': res = mul(a, b); break;
        case '/': res = div(a, b); break;
        case '%': res = rema(a, b); break;
    }
    return res;
}

int main() {
    Calculator handCalculator;
    int num1,num2,res;
    char buho;
    cin >> num1 >> num2 >>buho;

   
    res=handCalculator.calc(buho,num1,num2);
    cout << res<<endl;
}
*/
/*
class TV {
private :
    int channel;
public:
   TV(int channel) { this->channel = channel; }
   TV(){}
   void on() { cout <<channel<< " On" << endl; }
   void off() { cout << " Off" << endl; }
   int getchannel(){
       return channel;
   } 
   ~TV() { cout << "TV 소멸자" << endl; }

};
class ColorTV :public TV {
protected:   string color;
public:
   ColorTV(int channel, string color):TV(channel) { this->color = color; }
   ColorTV(){}
   void show() { cout << color << "색 보여라" << endl; }
   ~ColorTV() { cout << "color TV 소멸" << endl; }
};
class SmartTv : public ColorTV {
   int price;
public:
   SmartTv(){}
   SmartTv(int channel, string color, int price) :ColorTV(channel, color) { this->price = price; }
   void replay() {
      cout << color << "색 채널번호 " << getchannel() << ", 가격 " << price
         << "원 입니다." << endl;
   }
};
class WideTV : public ColorTV{
private:
    int size;
public:
    WideTV(string color, int channel , int size);
    void play();
};
WideTV::WideTV(string color, int channel , int size):ColorTV(channel,color){
    this->size=size;
    
}
void WideTV :: play(){
    cout << color<<"색" << getchannel() <<"번" << size << "인치" <<endl;
}

int main() {
   TV t(7);
   t.on(); t.off();
   ColorTV ct(9,"RED");
   SmartTv sm(12, "Blue", 2500000);
   sm.replay();
   ct.show();
   ct.on();

   WideTV wt("Yello",11,60);
   wt.play();
}

*/