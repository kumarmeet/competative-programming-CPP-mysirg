#include <bits/stdc++.h>

using namespace std;
class List {
  private:
    int n;
    int *p;
  public:
    List() {}

    List(int n) {
        this->n = n;
        p = new int[n];
        int val{0};
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    int getSize() {
        return this->n;
    }

    int* get() {
        return this->p;
    }

    void show() {
        for(int i = 0; i < this->n; i++)
            cout<< p[i] << " ";
        cout<<endl;
    }
};

class DataSet {
  private:
    int n;
    int *p;
  public:
    DataSet() {}

    DataSet(int n) {
        this->n = n;
        p = new int[n];
        int val{0};
        for(int i = 0; i < n; i++) {
            cin>>val;
            p[i] = val;
        }
    }

    int getSize() {
        return this->n;
    }

    int* get() {
        return this->p;
    }

    void show() {
        for(int i = 0; i < this->n; i++)
            cout<< p[i] << " ";
        cout<<endl;
    }
};


void insertion_sort(int *arr, int size) {
    int temp, j;
    for(int i = 1; i < size; i++) {
        j = i - 1;
        temp = arr[i];

        while(j > -1 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

template<typename T>
int sort(T &arr) {
    int *p = arr.get();
    insertion_sort(p, arr.getSize());
}
