#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
class Bank{
private:
    string name;
    string account_number;
    int password;
    int sum=0;
public:
    void membership_registration(string name1, string account_number1, int password1);
    void deposit(int money, Bank *bps);
    void withdrawal(int money, Bank *bps);
    void balance_check();
    void off();
};

void Bank :: membership_registration(string name1, string account_number1, int password1){
    name=name1;
    account_number=account_number1;
    password=password1;
    
}
void Bank :: deposit(int money, Bank *bps ){
    int password_check;
    string account_number_check;

    cout << "패스워드 입력: "<<endl;
    cin >> password_check;
    cout << "계좌번호 입력: "<<endl;
    cin >> account_number_check;
    for(int i=0; i<3; i++){
        if(bps[i].account_number == account_number_check && bps[i].password == password_check){
            cout <<bps[i].name <<"님 에게 입금 완료"<<endl;
            bps[i].sum=bps[i].sum+money;
        }
        else{
            continue;
        }
    }
}
void Bank :: withdrawal(int money,Bank *bps){
    int password_check;
    string account_number_check;
    cout << "패스워드 입력: "<<endl;
    cin >> password_check;
    cout << "계좌번호 입력: "<<endl;
    cin >> account_number_check;

     for(int i=0; i<3; i++){
        if(bps[i].account_number == account_number_check && bps[i].password == password_check){
            cout <<bps[i].name <<"님 에게 출금 완료"<<endl;
            bps[i].sum=bps[i].sum-money;
        }
        else{
            continue;
        }
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
    Bank* bps = new Bank[3];
    while(true){
    
    cout << "========================"<<endl;
    cout << "* IT Bank 관리 프로그램 V2*"<<endl;
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
        for (int i = 0; i < 3; i++) {
        cout <<i+1<< "번째 회원"<<endl;
        cout << "이름 입력: ";
        cin >> name;
        cout << "계좌번호 입력: ";
        cin >> account_number;
        cout << "패스워드 입력: ";
        cin >> password;
        bps[i].membership_registration(name, account_number, password);
        }
        break;

        case 2 :
        cout << "입금 할 돈 입력 :"<<endl;
        cin >> money;
        bps->deposit(money,bps);
        break;
        /*
        for (int i = 0; i < 3; i++) {
        cout <<i+1<< "번째 회원"<<endl;
        cout << "입금 할 돈 입력: ";
        cin >> money;
        bps[i].deposit(money);
        }
        */
        

        case 3 :
        cout << "출금 할 돈 입력 :"<<endl;
        cin >> money;
        bps->withdrawal(money,bps);
        break;
        /*
        for (int i = 0; i < 3; i++) {
        cout <<i+1<< "번째 회원"<<endl;
        cout << "출금 할 돈 입력: ";
        cin >> money;
        bps[i].withdrawal(money);
        }
        */
        break;

        case 4:
        
        for (int i = 0; i < 3; i++) {
        cout <<i+1<< "번째 회원"<<endl;
        bps[i].balance_check();
        }
        break;

        case 5:
        
        bps->off();
        break;
        }
        

}     
    
   
    return 0;
}