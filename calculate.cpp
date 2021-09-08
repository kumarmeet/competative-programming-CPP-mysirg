#include<bits/stdc++.h>

using namespace std;

class Operation {
private:
    int a, b, c, d, e;
public:
    void sub(int v, int w = 0, int x = 0, int y = 0, int z = 0) {
        a = v;
        b = w;
        c = x;
        d = y;
        e = z;
        int result = a - b - c - d - e;
        cout<<result<<endl;
    }
    void sum(int v, int w = 0, int x = 0, int y = 0, int z = 0) {
        a = v;
        b = w;
        c = x;
        d = y;
        e = z;
        int result = a + b + c + d + e;
        cout<<result<<endl;
    }
    void mul(int v, int w = 1, int x = 1, int y = 1, int z = 1) {
        a = v;
        b = w;
        c = x;
        d = y;
        e = z;
        int result = a * b * c * d * e;
        cout<<result<<endl;
    }
};
