#include <bits/stdc++.h>

using namespace std;

class Array {
  private:
    int *p;
    int n;
  public:
    Array() {
    }
    Array(int n) {
        this->n = n;
    }
    virtual void init() {
        p = new int[this->n];
        int val;
        for(int i = 0; i < this->n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    virtual void getSize() {
        cout<<this->n<<endl;
    }

    virtual void display() {
        for(int i = 0; i < this->n; i++) {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }

    virtual ~Array() {

    }
};
class IntegerArray:public Array {
  private:
    int *p;
    int n;
  public:
    IntegerArray(int n) {
        Array arr(n);
        this->n = n;
    }

    void init() {
        p = new int[this->n];
        int val;
        for(int i = 0; i < this->n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    void getSize() {
        cout<<this->n<<endl;
    }

    void display() {
        for(int i = 0; i < this->n; i++) {
            cout<<p[i]<<" ";
        }
        cout<<endl;
    }

    ~IntegerArray() {
        delete []p;
        cout<<1<<endl;
    }

};
