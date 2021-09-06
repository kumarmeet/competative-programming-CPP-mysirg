#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Array {
private:
    int *p;
    int n;

public:
    Array(int n) {
        if(n >= 6 && n <= 20) {
            this->n = n;
            p = new int[n];
            int val;
            for(int i = 0; i < n; i++) {
                cin>>val;
                p[i] = val;
            }
        }
    }

    void rearrange() {
        int mid = (this->n / 2);
        vector<int> v;
        vector<int> f;
        vector<int> s;

        for(int i = 0; i < n; i++) {
            v.push_back(p[i]);
        }

        sort(v.begin(), v.end());

        for(int i = 0; i < n; i += 2)
          f.push_back(v[i]);

        for(int i = 1; i < n; i += 2)
          s.push_back(v[i]);

        sort(s.rbegin(), s.rend());

        for(int i = 0; i < mid; i++)
          p[i] = f[i];

        int j = 0;
        for(int i = mid; i < n; i++)
          p[i] = s[j++];

    }

    void display()
    {
      for(int i = 0; i < n; i++)
        cout<<p[i]<<" ";
      cout<<endl;
    }
};
