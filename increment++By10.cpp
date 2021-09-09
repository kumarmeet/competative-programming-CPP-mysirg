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
        cout<<p[i]<<" ";
      cout << endl;
    }

    void operator++(int){
      int i = 0;
      rep(i, this->n)
          p[i] += 10;
    }

    void operator--(int){
      int i = 0;
      rep(i, this->n)
          p[i] -= 10;
    }
};
