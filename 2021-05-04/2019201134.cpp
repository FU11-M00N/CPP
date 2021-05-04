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
/*
void lotto(int arr[], string str ="중복가능",int size=6){
    srand(time(NULL));
    if(str== "중복 불가능"){
        for(int i=0; i<6; i++){
            arr[i] =rand()%6+1;
            for(int j=0; j<i; j++){
                    if(arr[i]==arr[j]){
                        i--;
                        break;
                    }
                }  
            }   
        for(int i=0; i<6; i++){
            cout << "중복 불가능 의 수"<< arr[i] <<endl;
        }    
        }
    else{
        for(int i=0; i<6; i++){
            arr[i] =rand()%6+1;    
            cout << "중복 가능할때 의 수"<< arr[i] <<endl;
            }
        }
    
    
    

}
int main(){
    
    int arr[6]; 
    lotto(arr);
    lotto(arr,"중복 불가능"); // 1-46사이의 임의의수 6개

    return 0;
}

/*
class MyVector {
   int* p;
   int size;
public:
   MyVector(int n=100) {
      p = new int[n];
      size = n;
   }
   ~MyVector() { delete[] p; }
};

int main() {
   MyVector* v1, * v2;
   v1 = new MyVector();
   v2 = new MyVector(1024);

   delete v1;
   delete v2;
}
*/

/*
int big(int a , int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int big (int a[], int size){
    int res = a[0];
    for(int i =1; i<size; i++){
        if(res < a[i]){
            res = a[i];
        }
    return res;
    }
}
int main(){
    int array[5] = {1,9,-2,8,6};
    cout << big(2,3) << endl;
    cout << big(array,5) << endl;
    return 0;
}
*/