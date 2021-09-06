#include <bits/stdc++.h>

using namespace std;

class String
{
private:
  char *p;
  int n;

public:
  String(int n)
  {
    this->n = n;
    p = new char[this->n];
  }
  void get()
  {
    char val;
    int i;
    for (i = 0; i < this->n - 1; i++)
    {
      cin >> val;
      p[i] = val;
    }
    p[i] = '\0';
  }
  String lower()
  {
    //ABCDEF
    String str(this->n);
    int i;
    for (i = 0; i < this->n - 1; i++)
    {
      if (p[i] >= 'A' && p[i] <= 'Z')
        str.p[i] = p[i] + 32;
      else
        str.p[i] = p[i];
    }
    p[i] = '\0';
    return str;
  }

  void print()
  {
    for (int i = 0; i < this->n - 1; i++)
      cout << p[i] << "";
    cout << endl;
  }

  ~String()
  {
    delete[] p;
  }
};
