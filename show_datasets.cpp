#include<bits/stdc++.h>

#define rep(x, n) for(int x = 0; i < n; x++)

using namespace std;

class Analyst;
class Accountant;

void print(Accountant &);
void print(Analyst &);

class Manager {
public:
    void display(Accountant &acc) {
        print(acc);
    }

    void display(Analyst &ana) {
        print(ana);
    }
};

class Accountant {
private:
    int *p;
    int n;
public:
    Accountant(int n) {
        this->n = n;
        p = new int[this->n];
        int val;
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    void work() {
        int i = 0;
        rep(i, this->n)
        p[i] += 5;
    }

    friend void print(Accountant &acc);
};

void print(Accountant &acc) {
    int i = 0;
    rep(i, acc.n)
    cout<<acc.p[i]<<" ";
    cout<<endl;
}

class Analyst {
private:
    int *p;
    int n;
public:
    Analyst(int n) {
        this->n = n;
        p = new int[this->n];
        int val;
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    void work() {
        int i = 0;
        rep(i, this->n)
        p[i] -= 10;
    }

    friend void print(Analyst &ana);
};

void print(Analyst &ana) {
    int i = 0;
    rep(i, ana.n)
    cout<<ana.p[i]<<" ";
    cout<<endl;
}
