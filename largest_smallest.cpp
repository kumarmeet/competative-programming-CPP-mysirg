#include <bits/stdc++.h>

using namespace std;

class List
{
private:
  int *p;
  int n;

public:
  List(int n)
  {
    this->n = n;
    if (n >= 5 && n <= 20)
      p = new int[n];
  }

  void init()
  {
    int val;
    for (int i = 0; i < this->n; i++)
    {
      cin >> val;
      p[i] = val;
    }
  }

  void find()
  {
    vector<int> v;
    int i = 0;

    for (int i = 0; i < this->n; i++)
      v.push_back(p[i]);

    sort(v.begin(), v.end());

    int max = v[v.size() - 1];
    int min = v[0];

    cout << max << " " << min;
  }
};
