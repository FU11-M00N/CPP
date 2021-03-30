#include <iostream>
#include <string>

using namespace std;


class Bank{
private:
    string name;
    string bank_num;
    int money;
    int total;

public:
    void member_create();
    void input();
    void output();
    void print_money();
    void off();
    Bank(string name, string bank_num);  
    Bank();
    ~Bank();
};

void Bank :: member_create(){
    cout << "회원명 : " << name << endl;
    cout << "계좌번호 : " << bank_num << endl;
}
void Bank ::  input(){
    string check_bank_num;
    cout << "계좌번호 입력."<< endl;
    cin >> check_bank_num;
    if(check_bank_num == "11111-11111"){
       cout << "입금 할 금액 : "<< endl;
       cin >> money;
       total+=money;
       cout << "입금 완료. : "<< endl;
    }
    else{
        cout << "계좌번호가 틀립니다. : "<< endl;
        exit(1);
    }
}
void Bank :: output(){
    string check_bank_num;
    cout << "계좌번호 입력."<< endl;
    cin >> check_bank_num;
   
    if(check_bank_num == "11111-11111"){
       cout << "출금 할 금액 : "<< endl;
       cin >> money;
       total-=money;
       cout << "출금 완료. : "<< endl;
    }
    else{
        cout << "계좌번호가 틀립니다. : "<< endl;
        exit(1);
    }
}
void Bank :: print_money(){
    cout<< "현재 잔액" << total<< endl;
}
void Bank ::  off(){
    exit(1);
}
Bank::Bank(string name1, string bank_num1) {
    name=name1;
    bank_num=bank_num1;
}   
Bank:: ~Bank(){
    
}
int main(){
    int num;
   
    Bank bk("문호준","11111-11111");
    while(true){
        cout << "선택지 고르시오" << endl;
        cin >> num;
         switch (num){
         case 1:
            bk.member_create();
             break;
         case 2:
            bk.input();
            break;
        case 3:
            bk.output();
            break;
        case 4:
            bk.print_money();
            break;
        case 5:
            bk.off();
            break;
    }
}

    return 0;

}