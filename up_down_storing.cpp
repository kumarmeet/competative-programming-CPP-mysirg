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

  void rearrange()
  {
    vector<int> store;
    vector<int> smallElement;
    vector<int> largeElement;
    int mid = (n / 2);

    for (int i = 0; i < n; i++)
      store.push_back(p[i]);

    sort(store.begin(), store.end());

    for (int i = 0; i < mid; i++)
      smallElement.push_back(store[i]);

    for (int i = mid; i < this->n; i++)
      largeElement.push_back(store[i]);

    reverse(largeElement.rbegin(), largeElement.rend());

    for (int i = 0, k = 0; i < n; i += 2)
      p[i] = largeElement[k++];

    for (int i = 1, k = 0; i < n; i += 2)
      p[i] = smallElement[k++];
  }

  void display()
  {
    for (int i = 0; i < this->n; i++)
      cout << p[i] << " ";
    cout << endl;
  }
};
