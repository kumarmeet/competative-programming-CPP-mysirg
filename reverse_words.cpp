#include<bits/stdc++.h>

using namespace std;

int main() {

  string s;
  string t;
  getline(cin, s);

  vector<string> v;

  for(int i = 0; i < s.length(); i++)
  {
    while(s[i] != ' ' && s[i])
      t += s[i++];
    v.push_back(t);
    t.clear();
  }

  reverse(v.rbegin(), v.rend());

  for(auto &str : v)
    cout<<str<<" ";
  return 0;
}
