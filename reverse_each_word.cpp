#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    string t;
    getline(cin, s);

    vector<string> v;

    for(int i = 0; i < s.length(); i++) {
        while(s[i] != ' ' && s[i])
            t += s[i++];
        v.push_back(t);
        t.clear();
    }

    for(int i = 0; i < v.size(); i++)
        reverse(v[i].begin(), v[i].end());

    for(auto &str : v)
        cout<<str<<" ";
    return 0;
}
