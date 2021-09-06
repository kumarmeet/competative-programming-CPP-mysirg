#include<iostream>

using namespace std;

class FindNumbers {
private:
    int *p;
    int n, m;
    int k;
public:
    FindNumbers() {
    }

    void init(int n, int m) {
        if(n < m) {
            this->n = n;
            this->m = m;
        } else if(n > m) {
            this->n = m;
            this->m = n;
        }
        p = new int;
        k = 0;
    }

    void find() {
        for(int i = this->n; i <= this->m; i++) {
            if(i % 7 == 0 && i % 5 == 0) {
                p[k++] = i;
            }
        }
    }

    void print() {
        for(int i = 0; i < k; i++)
            cout<< p[i]<<" ";
    }
};
