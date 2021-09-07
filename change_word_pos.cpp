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

    if(v.size() == 1) {
        cout<<v.at(0);
        v.clear();
    } else
        for(int i = 0; i < v.size(); i++)
            swap(v.at(i), v.at(i++));

    for(auto &str : v)
        cout<<str<<" ";
    return 0;
}
