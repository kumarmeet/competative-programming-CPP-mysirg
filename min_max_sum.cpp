#include <bits/stdc++.h>

using namespace std;

class DataSet {
  private:
    int *p;
    int n;
  public:
    DataSet(int n) {
        this->n = n;
        this->p = new int[this->n];
        int val;
        for(int i = 0; i < n; i++){
            cin>>val;
            p[i] = val;
        }
    }

    int operator[](string s){
        if(s == "min"){
            return *min_element(p, p + this->n);
        }
        else if(s == "max"){
            return *max_element(p, p + this->n);
        }
        else if(s == "sum"){
            int sum{0};
            for(int i = 0; i < n; i++)
                sum += p[i];
            return sum;
        }
    }
};
