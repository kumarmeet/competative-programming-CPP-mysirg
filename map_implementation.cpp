#include <bits/stdc++.h>

using namespace std;

class Entry {
  private:
    char *p;
    int N;
  public:
    void setPointer(char *s) {
        p = new char[10];
        strcpy(this->p,s);
    }
    void setInt(int &a) {
        this->N = a;
    }
    char* getPointer() {
        return this->p;
    }
    int getInt() {
        return this->N;
    }
};

class Map {
  private:
    Entry *en;
    static int n;
  public:
    Map() {
        en = new Entry[n + 1];
    }
    void add() {
        int id;
        cin>>id;
        cin.ignore();
        char *ch;
        ch = new char[10];
        cin.getline(ch, 10);
        en[n].setPointer(ch);
        en[n].setInt(id);
        n++;
    }
    void display() {
        for(int i = 0; i < n; i++)
            cout<<en[i].getInt()<<" "<<en[i].getPointer()<<endl;
    }
};
int Map::n = 0;
