//
// Created by Cameron Rosenberger on 9/21/22.
//

#include "ShellSort.h"
#include <iostream>
#include <vector>
#include "C1.h"
using namespace std;
#include <cmath>

ShellSort::ShellSort() {

}

void ShellSort::shellSort(vector<C1> &varray, int code) {
    vector<int> hlist;
    int k;
    switch (code) {
        case 0:
            hlist.push_back(1);
            break;
        case 1:
            k = floor(log2(varray.size()));
            for (int i = k; i>=0 ; i--) {
                int gap = pow(2, i);
                hlist.push_back(gap);
            }

            for(int j=0;j<hlist.size();j++){
                cout<<"H"<<hlist[j]<<" ";
            }
            cout<<endl;
            break;
        case 2:
            k = floor(log2(varray.size()));
            for (int i = 0; i <= k; i++) {
                int gap = pow(2, i);
                gap -= 1;
                hlist.push_back(gap);
            }
            reverse(hlist.begin(), hlist.end());
            hlist.pop_back();

            break;
        case 3:
            k = 2;
            while ((k * (k - 1)) / 2 < varray.size()) {
                hlist.push_back((k * (k - 1)) / 2);
                k++;
            }
            reverse(hlist.begin(), hlist.end());
            break;
    }
    for (int k = 0; k < hlist.size(); k++) {
        int h = hlist[k];
        for (int j = 1; j < varray.size(); j++) {
            C1 key;
            key == varray[j];
            int i = j - h;
            while (i >= 0 && key < varray[i]) {
                varray[i + h] == varray[i];
                i = i - h;
            }
            varray[i + h] == key;
        }
    }
}


