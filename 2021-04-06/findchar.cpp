#include <iostream>
#include <string>
using namespace std;

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
   

 
    return 0;
}