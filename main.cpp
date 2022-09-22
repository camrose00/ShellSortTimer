#include <iostream>
#include <vector>

using namespace std;
#include "ShellSort.h"
#include <cstdlib>
#include <cmath>
#include "fstream"



int main() {

    srand(time(nullptr));
    ShellSort shell;
    vector<C1> varray;
    vector<int> counts;
    ofstream send("Algos_Prog1.csv");
    for(int s=0; s<4;s++){
        for(int j=0;j<1;j++) {
            int length = rand() % 1000 + 1;

            for (int i = 0; i < length; i++) {
                int a = rand() % 100 + 1;
                int b = rand() % 100 + 1;
                int c = rand() % 100 + 1;

                C1 temp(a, b, c);
                varray.push_back(temp);
            }
            shell.shellSort(varray, s);
            send<<s<<","<<varray.size()<<","<<varray[0].comparableCount<<endl;
            cout<<s<<","<<varray.size()<<","<<varray[0].comparableCount<<endl;
            C1::comparableCount = 0;
        }
    }
}
