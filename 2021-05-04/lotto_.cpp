#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;


void lotto(int arr[], string str ="중복가능",int size=6){
    srand(time(NULL));
    if(str== "중복 불가능"){
        for(int i=0; i<6; i++){
            arr[i] =rand()%6+1;
            for(int j=0; j<i; j++){
                    if(arr[i]==arr[j]){
                        i--;
                        break;
                    }
                }  
            }   
        for(int i=0; i<6; i++){
            cout << "중복 불가능 의 수"<< arr[i] <<endl;
        }    
        }
    else{
        for(int i=0; i<6; i++){
            arr[i] =rand()%6+1;    
            cout << "중복 가능할때 의 수"<< arr[i] <<endl;
            }
        }
    
    
    

}
int main(){
    
    int arr[6]; 
    lotto(arr);
    lotto(arr,"중복 불가능"); // 1-46사이의 임의의수 6개

    return 0;
}
