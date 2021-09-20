#include <bits/stdc++.h>

using namespace std;
class ArrayList {
  private:
    int n;
    int *p;
  public:
    ArrayList() {}

    ArrayList(int n) {
        this->n = n;
        p = new int[n];
        int val{0};
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    int getSize() {
        return this->n;
    }

    int* getPointer() {
        return this->p;
    }
};

class Container {
  private:
    int n;
    int *p;
  public:
    Container() {}

    Container(int n) {
        this->n = n;
        p = new int[n];
        int val{0};
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    int getSize() {
        return this->n;
    }

    int* getPointer() {
        return this->p;
    }
};

template<typename T>
int search(T arr, int val) {
    int *p = arr.getPointer();
    for(int i = 0; i < arr.getSize(); i++) {
        if(val == p[i])
            return (i + 1);
    }
    return -1;
}
