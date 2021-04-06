#include <iostream>
#include <string>
using namespace std;

int main(){
     int *p;
    p= new int[5];
    if(!p){
        cout <<"메모리 할당할 수 없습니다.";
        return 0;
    }
    for(int i=0; i<5; i++){
        p[i] = i;
        cout << "*p = " <<p[i] << '\n';
        
    }
    
    delete [] p;
        
    
    
    
   

 
    
    return 0;
}