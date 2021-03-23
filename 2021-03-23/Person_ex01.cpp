#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    int age;
    
public:
    int getAge();
    string getName();
    Person();
    Person(string n);
    Person(string n, int a);
     ~Person();
};

int Person :: getAge(){
    return age;

}
string Person :: getName(){
   return name;
} 

Person::Person(){
    name="안정해짐";
    age=111;
}
Person::Person(string n){
    name=n;
}
Person::Person(string n, int a){
    name=n;
    age=a;
}
Person:: ~Person(){
    
}


int main(){
    Person p1("호준",21);    
    cout<< "이름 : "<< p1.getName()<<", 나이" << p1.getAge() << endl;

    Person p2("은비");    
    cout<< "이름 : "<< p2.getName()<<", 나이" << p2.getAge() << endl; 

    Person p3;    
    cout<< "이름 : "<< p3.getName()<<", 나이" << p3.getAge() << endl; 


    return 0;
}

