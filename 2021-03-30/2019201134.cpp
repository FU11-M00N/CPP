#include <iostream>
#include <string>

using namespace std;

//class TV{
// private:
//     int channel_num;
    
// public:
//     void channel_up();
//     void channel_down();
//     void channel_on();
//     void channel_print();
//     void channel_off();
//     TV(int num);
// };

// void TV :: channel_up(){
     
//     channel_num=channel_num+1;
    
//     cout << "채널 올리기 : " << channel_num<< endl;
//     if(channel_num == 15){
//         channel_num=0;
//         cout << "채널 15가 넘어서 0이 됩니다. 현재 채널 번호 : "<< channel_num <<endl;
//     }

// }

// void TV :: channel_down(){

//     channel_num=channel_num-1;
//     cout << "채널 내리기 : " << channel_num<< endl;
//     if(channel_num==0){
//         channel_num=15;
//         cout << "채널 0이 되어서 15이 됩니다. 현재 채널 번호 : "<< channel_num <<endl;
//     }


// }
// void TV:: channel_on(){
//     cout << "TV가 켜졌습니다 : " << channel_num<< endl;
// }
// void TV:: channel_print(){
//     cout << "현재 채널: "<< channel_num << endl;
//      if(channel_num==5){
//         cout <<"채널이 5번 SBS입니다."<< endl;
//     }
//     if(channel_num==7){
//         cout <<"채널이 7번 KBS2 입니다."<< endl;
//     }
//     if(channel_num==9){
//         cout << "채널이 9번 KBS1 입니다." << endl;
//     }
//     if(channel_num==11){
//         cout << "채널이 11번 MBC 입니다."<< endl;
//     }
//     if(channel_num==13){
//         cout << "채널이 13번 입니다. EBS" <<endl;
//     }
// }
// void TV:: channel_off(){
//     cout << "TV를 끄고 잠자리로 이동"<< endl;
    
// }

// TV::TV(int num){
//     channel_num=num;
// }

// class Bank{
// private:
//     string name;
//     string bank_num;
//     int money;
//     int total;

// public:
//     void member_create();
//     void input();
//     void output();
//     void print_money();
//     void off();
//     Bank(string name, string bank_num);  
//     Bank();
//     ~Bank();
// };

// void Bank :: member_create(){
//     cout << "회원명 : " << name << endl;
//     cout << "계좌번호 : " << bank_num << endl;
// }
// void Bank ::  input(){
//     string check_bank_num;
//     cout << "계좌번호 입력."<< endl;
//     cin >> check_bank_num;
//     if(check_bank_num == "11111-11111"){
//        cout << "입금 할 금액 : "<< endl;
//        cin >> money;
//        total+=money;
//        cout << "입금 완료. : "<< endl;
//     }
//     else{
//         cout << "계좌번호가 틀립니다. : "<< endl;
//         exit(1);
//     }
// }
// void Bank :: output(){
//     string check_bank_num;
//     cout << "계좌번호 입력."<< endl;
//     cin >> check_bank_num;
   
//     if(check_bank_num == "11111-11111"){
//        cout << "출금 할 금액 : "<< endl;
//        cin >> money;
//        total-=money;
//        cout << "출금 완료. : "<< endl;
//     }
//     else{
//         cout << "계좌번호가 틀립니다. : "<< endl;
//         exit(1);
//     }
// }
// void Bank :: print_money(){
//     cout<< "현재 잔액" << total<< endl;
// }
// void Bank ::  off(){
//     exit(1);
// }
// Bank::Bank(string name1, string bank_num1) {
//     name=name1;
//     bank_num=bank_num1;
// }   
// Bank:: ~Bank(){
    
// }
class Circle{
    int radius;
public:
    Circle() { 
        radius =1;
        }
    Circle(int r) { 
        radius = r;
    }
    void setRadius(int r){
        radius = r;
    }
    double getArea();
};

double Circle:: getArea(){
    return 3.14*radius*radius;
}


int main(){
    Circle circleArray[3] = {Circle(10),Circle(20),Circle()};
    
    for ( int i=0; i<3; i++){
        cout << "Circle " << i <<"의 면적은"<< circleArray[i].getArea()<< endl;
    }
    Circle *p;
    p=&circleArray[1];
    cout << "test" << p->getArea();
    
    return 0;
//     int num;
   
//     Bank bk("문호준","11111-11111");
//     while(true){
//         cout << "선택지 고르시오" << endl;
//         cin >> num;
//          switch (num){
//          case 1:
//             bk.member_create();
//              break;
//          case 2:
//             bk.input();
//             break;
//         case 3:
//             bk.output();
//             break;
//         case 4:
//             bk.print_money();
//             break;
//         case 5:
//             bk.off();
//             break;
//     }
// }

    
    // TV lg(5);
    // int num;
    // while(true){
    //     cin >> num;
        
    //     switch(num){
    //         case 1:
    //         lg.channel_on();
    //         break;

    //         case 2:
    //         lg.channel_up();
    //         break;

    //         case 3:
    //         lg.channel_down();
    //         break;

    //         case 4:
    //         lg.channel_print();
    //         break;

    //         case 5:
    //         lg.channel_off();
    //         exit(1); 
    //         break;

    //     default:
    //         break;
    //     }

    // }
    
   
    
    


   // string str[]={"ddd","yyy","eee"};
    
    //int a;
    //Test t;
    //t.setName("호준");
    
}