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

  friend ostream& operator<<(ostream &o, String &s);

  String operator*(int x){
    for (int i = 0; i < x; i++){
      cout << p << " ";
    }
    return *this;
  }
};

ostream& operator<<(ostream &o, String s){
  return o;
}
