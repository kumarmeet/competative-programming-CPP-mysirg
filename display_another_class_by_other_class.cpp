#include<bits/stdc++.h>

using namespace std;

class Rectangle;
class Circle;

void print(Rectangle &);
void print(Circle &);

class Print {
public:
    void display(Rectangle &r) {
        print(r);
    }
    void display(Circle &c) {
        print(c);
    }
};

class Rectangle {
private:
    int len, wid, ar, peri;
public:
    Rectangle(int len, int wid) {
        this->len = len;
        this->wid = wid;
    }

    void area() {
        this->ar = (this->len * this->wid);
    }

    void perimeter() {
        this->peri = 2 * (this->len + this->wid);
    }

    friend void print(Rectangle &r);
};

void print(Rectangle &r) {
    cout<<r.ar<<" "<<r.peri<<endl;
}

class Circle {
private:
    int rad;
    double ar, peri;
public:
    Circle(int rad) {
        this->rad = rad;
    }

    void area() {
        this->ar = (3.14 * this->rad * this->rad);
    }

    void perimeter() {
        this->peri = (2 * 3.14 * this->rad);
    }

    friend void print(Circle &c);
};

void print(Circle &c) {
    cout<<c.ar<<" "<<c.peri<<endl;
}
