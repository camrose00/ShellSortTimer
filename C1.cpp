//
// Created by Cameron Rosenberger on 9/13/22.
//

#include <iostream>
#include "C1.h"
static int comparableCount=0;

C1::C1() {
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0;
}

C1::C1(int a, int b, int c) {
arr[0] = a;
arr[1] = b;
arr[2] = c;
}

C1::C1(const C1 &t) {
    this->arr[0] = t.arr[0];
    this->arr[1] = t.arr[1];
    this->arr[2] = t.arr[2];
}

C1 &C1::operator==(const C1 &t) {
    this->arr[0] = t.arr[0];
    this->arr[1] = t.arr[1];
    this->arr[2] = t.arr[2];
    return *this;
}

bool C1::operator<(const C1 &t) {
    comparableCount++;
    if(this->arr[0] < t.arr[0])
        return true;
    else if(this->arr[0] == t.arr[0]){
        if(this->arr[1] < t.arr[1]){
            return true;
        }else if(this->arr[1] == t.arr[1] && (this->arr[2] < t.arr[2])){
            return true;
        }
    }
    return false;
}

void C1::Print() {
    std::cout<<"[ ";
    for(int i=0;i<3;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"]";
}
int C1::comparableCount = 0;




