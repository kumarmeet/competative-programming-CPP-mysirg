#include <bits/stdc++.h>

using namespace std;

class String
{
private:
  char *p;
  int n;

public:
  String()
  {
    p = nullptr;
  }
  String(const String &st)
  {
    this->n = st.n;     //copy data into caller object
    p = new char[st.n]; //make a new copy of p
    strcpy(p, st.p);    //string copy into new p
  }
  void get(int n)
  {
    this->n = n;
    p = new char[this->n];
    char val;
    int i;
    for (i = 0; i < this->n - 1; i++)
    {
      cin >> val;
      p[i] = val;
    }
    p[i] = '\0';
  }
  void upper()
  {
    int i;
    for (i = 0; i < this->n - 1; i++)
    {
      if (p[i] >= 'a' && p[i] <= 'z')
        p[i] = p[i] - 32;
      else
        p[i] = p[i];
    }
    p[i] = '\0';
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
