#include <bits/stdc++.h>

using namespace std;

class Input {
  private:
    int a;
    double d;
    char *s;
  public:
    void read(int &a) {
        cin>>a;
        this->a = a;
    }
    void read(double &d) {
        cin>>d;
        this->d = d;
    }
    void read(char *s) {
        cin.ignore();
        cin.getline(s, 20);
        this->s = new char[20];
        strcpy(this->s, s);
    }
    int getInt() {
        return this->a;
    }
    double getDouble() {
        return this->d;
    }
    char* getString() {
        return this->s;
    }
};

class Output {
  public:
    void println(int x) {
        cout<<x<<endl;
    }

    void println(double d) {
        cout<<d<<endl;
    }

    void println(char *s) {
        cout<<s<<endl;
    }
};

class System {
  public:
    Input in;
    Output out;
};
