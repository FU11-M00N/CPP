#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

class Person {
   string name;
public:
   Person(string str) {
      name = str;
   }
   string getName() {
      return name;
   }
};

class UpDown {
public:
   static int top; //99
   static int down; //0
   static void run();
};
int UpDown::top = 99;
int UpDown::down = 0;
void UpDown::run() {
    top=99;
    down=0;
    srand(time(NULL));
    int num=rand()%99;
    int choice;
   Person p[] = { Person("크호준"), Person("롱은비") };
   cout << "UpDown 게임을 시작한다!" << endl;
   
   while(true){
      cout << "답은 " << down << "과 " << top << " 사이에 있습니다."<<endl;
      cout << p[0].getName() << ">>";
      cin >> choice;
      
      if(choice == num){
          cout << p[0].getName() <<"가 정답 입니다"<< endl;
          break;
      }
      else if(choice < num){
          down=choice;
      }
      else if(choice > num){
          top=choice;
      }
       cout << "답은 " << down << "과 " << top << " 사이에 있습니다."<<endl;
      cout << p[1].getName() << ">>";
      cin >> choice;
      
      if(choice == num){
          cout << p[1].getName() <<"가 정답 입니다"<< endl;
          break;
      }
      else if(choice < num){
          down=choice;
      }
      else if(choice > num){
          top=choice;
      }
   }

   
}

int main() {
    UpDown a;
    a.run();
}