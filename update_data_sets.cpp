#include<bits/stdc++.h>

using namespace std;

class DataSet {
private:
    int *p;
    int n;

public:
    DataSet() {
        p = nullptr;
    }

    DataSet(DataSet &data) {
        this->n = data.n; 
        p = new int[data.n]; //make a new copy
        for(int i = 0; i < data.n; i++) // copy call element of data object to caller object
          p[i] = data.p[i];
    }

    void get(int n) {
        if(n % 3 == 0) {
            this->n = n;
            p = new int[this->n];
            int val{0};
            for (int i = 0; i < this->n; i++) {
                cin >> val;
                p[i] = val;
            }
        }
    }

    void part1() {
        for (int i = 0; i < n / 3; i++)
            p[i] += 3;
    }

    void part2() {
        for (int i = n / 3; i < n / 3 * 2; i++)
            p[i] *= 2;
    }

    void part3() {
        for (int i = n / 3 * 2; i < n; i++)
            p[i] -= 5;
    }

    void print() {
        for (int i = 0; i < this->n; i++)
            cout << p[i] << " ";
        cout << endl;
    }

};
