#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(NULL));
    char ch;

    string list[]= {"apple","bear","banana","happy"};
    int r =rand()%5;
    string str = list[r];
    cout<<"문자를 맞춰보세요 : ";
    string res(str.length(),'_');
    cout<<res<<endl;
    
    while(true){
        cout<<"문자를 입력 : ";
        cin >> ch;
        
        for(int i=0; i<str.length(); i++){
            if(ch==str[i]){
                res[i]=ch;
                cout<<res<<endl;
            }
        }
        if(str== res){
            cout<<"성공"<<endl;   
            break;
        }
    }

    return 0;
    }
