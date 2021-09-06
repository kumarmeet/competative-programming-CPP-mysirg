#include<bits/stdc++.h>

using namespace std;

class Array {
private:
    int *p;
    int n;
public:
    Array(int n) {
        this->n = n;
        if(n % 2 == 0) {
            p = new int[n];
            int val{0};
            for(int i = 0; i < n; i++) {
                cin>>val;
                p[i] = val;
            }
        }
    }

    void rearrange() {
        int halfLen = this->n / 2;
        int odd[halfLen];
        int even[halfLen];
        int j = 0, k = 0;
        for(int i = 0; i < this->n; i++) {
            if(p[i] % 2 == 0)
                even[j++] = p[i];
            else
                odd[k++] = p[i];
        }

        j = 0, k = 0;

        while(halfLen) {
            p[j++] = odd[k];
            p[j++] = even[k];
            k++;
            halfLen--;
        }
    }

    void display() {
        for(int i = 0; i < this->n; i++)
            cout<<p[i] <<" ";
    }

};
