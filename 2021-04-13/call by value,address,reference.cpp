#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;




void swap1(int x, int y) { // call by value
   int temp = x;
   x = y;
   y = temp;
}

void swap2(int* x, int* y) {
   int temp = *x;
   *x = *y;
   *y = temp;
}

void swap3(int &a, int &b) {
   int temp = a;
   a = b;
   b = temp;
}

int main() {

   int a = 3, b = 5;
   cout << a << "," << b << endl;
   swap1(a, b);
   cout <<"call by value : "<< a << "," << b << endl;
   swap2(&a, &b);
   cout << "call by address : " << a << "," << b << endl;
   swap3(a, b);
   cout << "call by reference : " <<a << "," << b << endl;

   /* ************ call by value/ address/reference 중 하나 주관식 ****** */

   //int a = 5, b = 7;
   //cout << a << "," << b << endl;
   //swap(a, b);
   //cout << a << "," << b << endl;
   //string s1 = "apple", s2 = "banana";
   //cout << s1 << "," << s2 << endl;
   //swap(s1, s2);
   //cout << s1 << "," << s2 << endl;

   return 0;
}

// int main() {
//     srand(time(NULL));
//     char ch;

//     string list[]= {"apple","bear","banana","happy"};
//     int r =rand()%5;
//     string str = list[r];
//     cout<<"문자를 맞춰보세요 : ";
//     string res(str.length(),'_');
//     cout<<res<<endl;
    
//     while(true){
//         cout<<"문자를 입력 : ";
//         cin >> ch;
        
//         for(int i=0; i<str.length(); i++){
//             if(ch==str[i]){
//                 res[i]=ch;
//                 cout<<res<<endl;
//             }
//         }
        


//         if(str== res){
//             cout<<"성공"<<endl;
            
//             break;
//         }
//     }

//     return 0;
//     }
//    char a;
//    string str4;
//    cout << "영어로 문장을 입력하세여 >> ";
//    getline(cin, str4);
//    cout << "찾을 문자를 입력하세여 >> ";
//    cin >> a;
//    int startindex = 0;
//    int x = 0;
//    int count = 0;

//    while (true) {
//       x = str4.find(a, startindex);
//       if (x != -1) {
//           count++;
//           startindex=x+1;
//       }
//       else {
//          break;
//       }
//    }
//     cout << "니가 찾은건 " <<count;


      

//    char c = 'A';
//    string str = "Apple";
//    string str2("Banana");
//    string str3;
//    getline(cin, str3);
//    cout << str << str2 << "," << str3 << endl;
//    str2.append("orange");
//    cout << str2 << endl;
//    if (str == str2)
//       cout << "같다" << endl;
//    string* p = new string("C++");
//    cout << *p << endl;
//    p->append(" Goood~");
//    cout << *p << endl;
//    int x =str.find("p",3);
//    cout <<x<<endl;
 
//   delete p;
