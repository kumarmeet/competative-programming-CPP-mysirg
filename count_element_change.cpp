#include<iostream>

using namespace std;

class Array {
private:
    int *p;
    int n;
    int sum;
public:
    Array(int n) {
        this->n = n;
        if(n >= 5 && n <= 20) {
            p = new int[n];
            int val{0};
            for(int i = 0; i < n; i++) {
                cin>>val;
                if(val != 0)
                    p[i] = val;
            }
        }
    }

    void add() {
        for(int i = 0; i < this->n; i++)
            this->sum += p[i];
    }

    void elementchange(int x) {
        int cnt{0};
        if(x > this->sum) { //add
            for(int i = 0; i < this->n; i++) {
                if(this->sum >= x) {
                    break;
                }
                cnt++;
                this->sum += 10;
            }
        } else if(this->sum > x) { //sub
            for(int i = 0; i < this->n; i++) {
                if(x >= this->sum) {
                    break;
                }
                cnt++;
                this->sum -= 10;
            }
        }
        cout<<cnt;
    }
};
