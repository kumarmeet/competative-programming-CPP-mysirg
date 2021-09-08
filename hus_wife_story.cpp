#include<bits/stdc++.h>

using namespace std;

class Husband;
void withdrawl(int d, Husband &h);
void deposit(int d, Husband &h);

class Wife {
public:
    void debit(int d, Husband &h) {
        withdrawl(d, h);
    }
    void givesaving(int s, Husband &h) {
        deposit(s, h);
    }
};

class Husband {
private:
    int bal;
public:
    Husband(int bal) {
        this->bal = bal;
    }

    void debit(int d) {
        this->bal -= d;
    }

    void credit(int c) {
        this->bal += c;
    }

    void show() {
        cout<<this->bal<<endl;
    }

    friend void withdrawl(int d, Husband &h);
    friend void deposit(int d, Husband &h);
};

void withdrawl(int d, Husband &h) {
    h.bal -= d;
}

void deposit(int d, Husband &h) {
    h.bal += d;
}
