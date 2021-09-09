#include<bits/stdc++.h>

#define rep(i, x) for(int i = 0; i < x; i++)

using namespace std;

class MyArray
{
  private:
    int *p;
    int n;
  public:
    MyArray(int n){
      this->n = n;
      p = new int[this->n];
      int i = 0;
      rep(i, n)
        cin >> p[i];
    }

    int operator!=(MyArray arr){
      sort(p, p + this->n);
      sort(arr.p, arr.p + arr.n);

      for (int i = 0; i < this->n; i++)
        if(arr.p[i] != p[i])
          return 1;

          return 0;
    }
};
