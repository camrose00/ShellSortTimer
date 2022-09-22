//
// Created by Cameron Rosenberger on 9/13/22.
//

#ifndef PROGRAM1_C1_H
#define PROGRAM1_C1_H


class C1 {
private:
    int arr[3];
public:
     static int comparableCount;
    C1();
    C1(int,int,int);
    C1(const C1& t);
    C1 & operator==(const C1& t);
    bool operator<(const C1& t);
    void Print();



};


#endif //PROGRAM1_C1_H
