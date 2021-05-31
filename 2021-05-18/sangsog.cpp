#include <iostream>
using namespace std;
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