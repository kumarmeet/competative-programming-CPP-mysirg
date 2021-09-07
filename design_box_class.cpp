#include<bits/stdc++.h>

using namespace std;

class Box {
private:
    int l, b, h;

public:
    Box(int l, int b, int h) {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    Box(int x, int y) {
        this->l = this->b = x;
        this->h = y;
    }

    Box(int x) {
        this->l = this->b = this->h = x;
    }

    Box(Box &obj) {
        this->l = obj.l;
        this->b = obj.b;
        this->h = obj.h;
    }

    Box() {
    }

    //important
    Box& docopy() {
        return *this; //return caller object address (this)
    }

    int volume() {
        return (l * b * h);
    }

    static void print(int vol) {
        cout<<vol<<endl;
    }
};

int x,y,z;
    cin>>x>>y>>z;
    Box B1(x);
    Box B2(x,y);
    Box B3(x,y,z);
    Box B4(B1);
    Box B5 = B2;
    Box B6 = B3.docopy();
    Box::print(B6.volume());
    Box::print(B5.volume());
    Box::print(B4.volume());
    return 0;
