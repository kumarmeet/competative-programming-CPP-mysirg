#include <bits/stdc++.h>

using namespace std;

class String {
  private:
    char *p;
    int n;

  public:
    String() {}

    String(int n) {
        cin.ignore();
        this->n = n;
        p = new char[this->n];
        cin.getline(p, this->n);
    }

    String operator-(String &s) {
        String result;
        result.p = new char[100];
        int i, j, k;
        i = j = k = 0;
        int s1Len = strlen(p);
        string str;

        while(i < s1Len) {
            while(p[i] != ' ' && i < s1Len) {
                str += p[i++];
            }
            if(str.compare(s.p) != 0) {
                while(k < str.length())
                    result.p[j++] = str[k++];

                result.p[j++] = ' ';
            }
            k = 0;
            i++;
            str.clear();
        }

        result.p[strlen(result.p) - 1] = '\0';

        return result;
    }

    void print() {
        cout << p;
    }
};
