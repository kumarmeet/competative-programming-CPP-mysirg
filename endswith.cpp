#include <bits/stdc++.h>

using namespace std;

int endswith(char *s1, char *s2)
{
  s1 = new char[30];
  s2 = new char[30];

  cin.getline(s1, 30);
  cin.getline(s2, 30);

  int len1 = strlen(s1);
  int len2 = strlen(s2);

  int i = 0, j = len2;

  while (1)
  {
    if (s1[len1--] == s2[len2--])
      i++;
    else
      return 0;

    if (i == j)
      return 1;
  }
}

int main()
{
  char *s1, *s2;
  cout << endswith(s1, s2);
  return 0;
}
