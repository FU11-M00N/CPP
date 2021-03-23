#include <iostream>
#include <string>
#include "cal_class.cpp"
using namespace std;

int main(){
     Add a;
     Sub s;
     Mul m;
     Div d;
     int value;
     int num1,num2;
     char sign;    

    while(true){
        cout << "두 정수와 연산자를 입력하세요."<< endl;
        cin >> num1;
        cin >> num2;
        cin >> sign;
       
        if(sign=='+'){
            a.setValue(num1,num2);
            value=a.calculator();
            cout <<"값: " << value<< endl;
        }
        else if(sign=='-'){
            s.setValue(num1,num2);
            value=s.calculator();
            s.calculator();
            cout <<"값: " << value<< endl;
        }
        else if(sign=='*'){
            m.setValue(num1,num2);
            value=m.calculator();
            m.calculator();
            cout <<"값: " << value<< endl;
        }
            
        else if(sign=='/'){
            d.setValue(num1,num2);
            value=d.calculator();
            d.calculator();
            cout <<"값: " << value<< endl;
        }
        
    } 

    return 0;

}