#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;


#include <iostream>
#include <cstring>
#include <time.h>
#include <stdlib.h>
#include <math.h>
using namespace std;


int main(){
   string s1 , s2;
   int s1_len, s2_len;
   int count;
   cin >> s1;
   cin >> s2;
   
   s1_len=s1.length();
   s2_len=s2.length();
   

   if(s1.compare(s2)!=0){
     
   }
   else{
       count=count+1;
   }
   

   return 0;
}


/*
int main() {

   int x[2][3] = { {1,2,3},{4,5,6} };
   char y[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
   int a, b , i, j,flag=0,c=0,win=0;

   while (true) {

      if (c >= 9) {
         cout << "게임이 종료되었습니다.";
         break;
      }

      cout << "입력값(x y):";
      cin >> a >> b;

      if (y[a][b] != ' ') {
         cout << "중복되었습니다. 다시 입력하세요." << endl;
         continue;
      }

      if (flag == 0) {
         y[a][b] = 'X';
         flag = 1;
      }
      else {
         y[a][b] = 'O';
         flag = 0;
      }
      
      for (i = 0; i < 3; i++) {
         for (j = 0; j < 3; j++) {
            cout <<"|"<< y[i][j]<<' ';
         }
         cout << endl;
      }
      c++;

      

      
   }

   return 0;
}
*/


/*
int main(){
   int x[10];
   int i,sum=0;
   double avg=0.00;
   for(i=0; i<=9; i++){
      cout << i+1 <<"번 학생의 점수 : ";
      cin >> x[i];
      sum=sum+ x[i];
   }
   avg=sum/10.00;

   cout << "총 합 = " << sum;
  
   cout << "평균 = " << avg;

}
*/
/*
int main(){
   
   char ch;
   int mo_count=0,ja_count=0;
   cout << "문자를 입력하세요. : " ;
   while(cin>>ch){

      if(ch =='a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ){
         mo_count=mo_count+1;
         
      }
      else{
         ja_count=ja_count+1;
         
      }
      cout << "문자를 입력하세요. : ";
   }

   cout << "모음의 수: " <<mo_count;
   cout << "\n";
   cout << "자음의 수: " <<ja_count;

*/


/*
   
   int num1,num2,sum,ran_num1,ran_num2,value;
   

   
   while(true){
      srand(time(NULL));
      ran_num1=rand()%100;
      ran_num2=rand()%100;
     
      cout << "첫번째 수 : "<<ran_num1;
      cout << "\n";
      cout << "두번째 수 : " << ran_num2;
      
   
      sum=ran_num1+ran_num2;
      
      cout << "\n";
      
      cout << "정답은? ";
      cin >> value;
      if(sum==value){
         cout << "\n";
         cout <<"정답";
         break;
      }
      else{
         cout << "\n";
         cout <<"틀림";
      }
      sum=0;
      value=0;      
   } 
}*/


/*
int main() {
   string s1, s2;
   cout << "문자열입력(공백 미포함) : ";
   cin >> s1;
   cout << s1 << endl;
   cin.ignore(100, '\n');
   cout << "문자열입력(공백포함) : ";
   getline(cin, s2);
   cout << s2 << endl;
}
*/











//int main() {
//   
//   char name[11];
//   char address[100];
//
//   cout << "이름을 입력하세요 >>";
//
//   cin >> name;
//
//   cin.clear();
//   cin.ignore(10, '\n');
//
//   cout << "이름은 " << name << " 입니다\n";
//
//   cout << "주소를 입력하세요 >>";
//
//   cin.getline(address, 100, '\n');
//   cout << "주소는 " << address << " 입니다\n";
//
//   char password[11];
//
//   cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
//
//   while (true) {
//      cout << "암호 >>";
//      cin >> password;
//      if (strcmp(password, "C++")==0) {
//         break;
//      }
//   }
//
//   return 0;
//}















/*
#include <iostream>
using namespace std;
int x = 100;
void show(int b);
int main() {
   int a;
   cout << "정수는?";
   cin >> a;
   cout << "a=" << a << endl;
   show(15);
   return 0;
}

void show(int b) {
   cout << "쇼 " << b * 2 << endl;
}
*/