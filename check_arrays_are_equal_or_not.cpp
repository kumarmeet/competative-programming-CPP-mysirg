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

    int operator==(MyArray arr){
      int flag = 0;
      for (int i = 0; i < this->n; i++)
      {
        if(p[i] == arr.p[i])
            flag = 1;
          else
            return 0;
      }
      if(flag)
        return 1;
      return 0;
    }
};
