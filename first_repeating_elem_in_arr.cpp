#include<iostream>

using namespace std;

class Array {
private:
    int *p;
    int n;
public:
    Array(int n) {
        this->n = n;
        if(n >= 5 && n <= 20) {
            p = new int[n];
            int val{0};
            for(int i = 0; i < n; i++) {
                cin>>val;
                if(val > 0) {
                    p[i] = val;
                }
            }
        }
    }

    int search() {
        int mid = (this->n / 2);
        int i;
        for(i = 0; i < this->n; i++) {
            for(int j = i + 1; j < (mid + i); j++) {
                if(p[i] == p[j]) {
                    return p[j];
                }
            }
        }
        if(i == n)
          return 0;
    }
};
