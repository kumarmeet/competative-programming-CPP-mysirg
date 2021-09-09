#include<bits/stdc++.h>

using namespace std;

class String{
  private:
    char *p;
    int n;
  public:
  String(int n){
    this->n = n;
    p = new char[this->n];
    cin.ignore();
    cin.getline(p, this->n);
  }
  
  String(){}

    int operator>(String &s){
    int len1 = strlen(p);
    int len2 = strlen(s.p);

    if(len1 > len2 || strcmp(p, s.p) == 1)
      return 1;
    else{
      if(strcmp(p, s.p) != -1)
        return 0;
    }
    return 0;
  }
};
