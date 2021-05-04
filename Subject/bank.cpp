#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Bank{
private:
    string name;
    string account_number;
    int password;
    int sum;
public:
    void membership_registration(string name1, string account_number1, int password1);
    void deposit(int money);
    void withdrawal(int money);
    void balance_check();
    void off();
};

void Bank :: membership_registration(string name1, string account_number1, int password1){
    name=name1;
    account_number=account_number1;
    password=password1;
    
}
void Bank :: deposit(int money){
    int password_check;
    string account_number_check;

    cout << "패스워드 입력: ";
    cin >> password_check;
    cout << "계좌번호 입력: ";
    cin >> account_number_check;

    if(account_number == account_number_check && password == password_check){
        cout <<"입금 완료";
        sum=sum+money;
    }
    else{
        cout <<"패스워드 혹은 계좌번호 틀림";
        exit(0);
    }
}
void Bank :: withdrawal(int money){
    int password_check;
    string account_number_check;
    cout << "패스워드 입력: ";
    cin >> password_check;
    cout << "계좌번호 입력: ";
    cin >> account_number_check;

    if(account_number == account_number_check && password == password_check){
        cout <<"출금 완료";
        sum=sum-money;
    }
    else{
        cout <<"패스워드 혹은 계좌번호 틀림";
        exit(0);
    }
}
void Bank :: balance_check(){
    cout <<name<< "님의 "<< "현재 잔고는: "<< sum <<"원" << "계좌 번호는 " <<account_number <<"입니다."<<endl;
   
}
void Bank :: off(){
    cout << "종료"<<endl;
    exit(1);
}


int main(){
    
    string name;
    int money;
    string account_number;
    int password;
    int choice;
    Bank b;
    Bank *bp = &b;
    while(true){
    
    cout << "========================"<<endl;
    cout << "* IT Bank 관리 프로그램 *"<<endl;
    cout << "========================"<<endl;

   
    cout << "1. 회원등록"<<endl;
    cout << "2. 입금"<<endl;
    cout << "3. 출금"<<endl;
    cout << "4. 잔액조회"<<endl;
    cout << "5. 종료"<<endl;
         
        cin >> choice;
        
        system("cls");
        switch (choice){
        case 1 :
        cout << "이름 입력: ";
        cin >> name;
        cout << "계좌번호 입력: ";
        cin >> account_number;
        cout << "패스워드 입력: ";
        cin >> password;
        bp->membership_registration(name,account_number,password);
        break;

        case 2 :
        cout << "입금 할 돈 입력: ";
        cin >> money;
        bp->deposit(money);
        break;

        case 3 :
        cout << "출금 할 돈 입력: ";
        cin >> money;
        bp->withdrawal(money);
        break;

        case 4:
        bp->balance_check();
        break;

        case 5:
        bp->off();
        break;
        }
        

}     
    
   
    return 0;
}