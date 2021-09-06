#include <bits/stdc++.h>

using namespace std;

class Array
{
private:
  int *p;
  int n;

public:
  Array(int n)
  {
    if (n >= 6 && n <= 20)
    {
      this->n = n;
      p = new int[n];
      int val;
      for (int i = 0; i < this->n; i++)
      {
        cin >> val;
        p[i] = val;
      }
    }
  }

  int find(int m)
  {
    int cnt{0};
    int temp = m;
    for (int i = 0; i < this->n; i++)
    {
      if (p[i] > p[i + 1] && m--)
        cnt++;
    }

    if (temp == cnt)
      return 1;
    return -1;
  }

  void display()
  {
    for (int i = 0; i < this->n; i++)
      cout << p[i] << " ";
    cout << endl;
  }
};
