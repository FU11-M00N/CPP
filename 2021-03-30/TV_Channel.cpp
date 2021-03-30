#include <iostream>
#include <string>

using namespace std;

class TV{
private:
    int channel_num;
    
public:
    void channel_up();
    void channel_down();
    void channel_on();
    void channel_print();
    void channel_off();
    TV(int num);
    ~TV();
};

void TV :: channel_up(){
     
    channel_num=channel_num+1;
    
    cout << "채널 올리기 : " << channel_num<< endl;
    if(channel_num == 15){
        channel_num=0;
        cout << "채널 15가 넘어서 0이 됩니다. 현재 채널 번호 : "<< channel_num <<endl;
    }
}

void TV :: channel_down(){

    channel_num=channel_num-1;
    cout << "채널 내리기 : " << channel_num<< endl;
    if(channel_num==0){
        channel_num=15;
        cout << "채널 0이 되어서 15이 됩니다. 현재 채널 번호 : "<< channel_num <<endl;
    }


}
void TV:: channel_on(){
    cout << "TV가 켜졌습니다 : " << channel_num<< endl;
}
void TV:: channel_print(){
    cout << "현재 채널: "<< channel_num << endl;
     if(channel_num==5){
        cout <<"채널이 5번 SBS입니다."<< endl;
    }
    if(channel_num==7){
        cout <<"채널이 7번 KBS2 입니다."<< endl;
    }
    if(channel_num==9){
        cout << "채널이 9번 KBS1 입니다." << endl;
    }
    if(channel_num==11){
        cout << "채널이 11번 MBC 입니다."<< endl;
    }
    if(channel_num==13){
        cout << "채널이 13번 입니다. EBS" <<endl;
    }
}
void TV:: channel_off(){
    cout << "TV를 끄고 잠자리로 이동"<< endl;
    
}

TV::TV(int num){
    channel_num=num;
}
TV:: ~TV(){
    
}


int main(){
    TV lg(5);
    int num;
    while(true){
        cin >> num;
        
        switch(num){
            case 1:
            lg.channel_on();
            break;

            case 2:
            lg.channel_up();
            break;

            case 3:
            lg.channel_down();
            break;

            case 4:
            lg.channel_print();
            break;

            case 5:
            lg.channel_off();
            exit(1); 
            break;

        default:
            break;
        }

    }
    
   
    
    return 0;


   // string str[]={"ddd","yyy","eee"};
    
    //int a;
    //Test t;
    //t.setName("호준");
    
}