#include<bits/stdc++.h>

#define rep(i, x) for(int i = 0; i < x; i++)

using namespace std;

class DataSet
{
  private:
    int *p;
    int n;
  public:
    DataSet(int n){
      this->n = n;
      p = new int[this->n];
      int i = 0;
      rep(i, n)
        cin >> p[i];
    }

    void print(){
      int i = 0;
      rep(i, this->n)
        cout << p[i] << " ";
      cout << endl;
    }

    void operator()(int a, int b, int c){
      delete[] p;
      this->n = 3;
      p = new int[this->n];
      p[0] = a;
      p[1] = b;
      p[2] = c;
    }

    void operator()(int *arr, int b){
      delete[] p;
      this->n = b / sizeof(int);
      p = new int[this->n];
      int i = 0;
      rep(i, this->n)
      p[i] = arr[i];
    }

    void operator()(DataSet &d){
      delete[] p;
      this->n = d.n;
      p = new int[this->n];
      int i = 0;
      rep(i, this->n)
          p[i] = d.p[i];
    }

    ~DataSet(){
      delete[] p;
    }
};
