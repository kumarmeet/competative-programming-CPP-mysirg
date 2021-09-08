#include<bits/stdc++.h>

using namespace std;

class WaterTank {
private:
    int l, b, h;
public:
    WaterTank(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }
    int getLength() {
        return this->l;
    }
    int getWidth() {
        return this->b;
    }
    int getHeight() {
        return this->h;
    }
    void volume(WaterTank &w) {
        int v = w.getLength() * w.getHeight() * w.getWidth();
        cout<<v<<endl;
    }
};

class Calculate {
private:
    int l, b, h;
public:
    void volume(int x) {
        l = b = h = x;
        cout<<(l*b*h)<<endl;
    }
    void volume(int x, int y) {
        l = b = x;
        h = y;
        cout<<(l* l * h)<<endl;
    }
    void volume(int x, int y, int z) {
        l = x;
        b = y;
        h = z;
        cout<<(l*b*h)<<endl;
    }
    void volume(WaterTank &w) {
        w.volume(w);
    }
};
