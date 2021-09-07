#include <bits/stdc++.h>

using namespace std;

int startswith(char *s1, char *s2) {
    s1 = new char[50];
    s2 = new char[50];

    cin.getline(s1, 50);
    cin.getline(s2, 50);

    int len1 = strlen(s1);
    int len2 = strlen(s2);
    int i = 0, k = 0, l = 0;
    string s;

    while (i <= len1) {
        while (s1[i] != ' ')
            s += s1[i++];

        for (l = 0; l < len2;) {
            if (s[l] == s2[l]) {
                k++;
                l++;
            } else {
                k = -1;
                break;
            }
        }
        if (k == l)
            return 1;
        i++;
        k = 0;
        s.clear();
    }
    return 0;
}

int main() {
    char *s1, *s2;
    int pos;
    cout << startswith(s1, s2);
    return 0;
}
