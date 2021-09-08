#include <bits/stdc++.h>
#include<stdio.h>

#define MAX_SIZE 30
using namespace std;

class String {
  private:
    char *p;
    int n;
  public:
    String(int n) {
        this->n = n;
        p = new char[this->n];
        cin.ignore();//for release buffer
        cin.getline(p, this->n);
    }

    String() {
    }

    String operator+(String &s2) {
        String temp;
        temp.p = new char[MAX_SIZE];

        strcpy(temp.p, this->p); //caller object string copy into temp
        strcat(temp.p, " "); // concate space to temp
        strcat(temp.p, s2.p); // concate formal argument to temp

        return temp;
    }

    void print() {
        cout<<this->p;
    }
};
