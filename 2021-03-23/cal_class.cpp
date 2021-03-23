#include <iostream>
#include <string>
#include "cal.h"
using namespace std;


int Add :: calculator(){
    return a+b;
}

void Add :: setValue(int x, int y){
    a=x;
    b=y;
}

int Sub :: calculator(){
    return a-b;
}

void Sub :: setValue(int x, int y){
    a=x;
    b=y;
}

int Mul :: calculator(){
    return a*b;
}
void Mul :: setValue(int x , int y){
    a=x;
    b=y;

}

int Div:: calculator(){
    return a/b;
}

void Div:: setValue(int x, int y){
    a=x;
    b=y;
}