#include<iostream>
#include<limits>

using namespace std;

class FindPosition {
private:
    int *p1, *p2, *p3;
    int n;

    int minimum(int *arr, int size) {
        int mini{INT8_MAX};
        int index;

        for(int i = 0; i < size; i++) {
            if(mini > arr[i]) {
                mini = arr[i];
                index = i;
            }
        }
        return index + 1;
    }
public:
    FindPosition() {
    }

    void init(int n) {
        this->n = n;
        p1 = new int[n];
        p2 = new int[n];
        p3 = new int[n];

        int val{0};
        for(int i = 0; i < n; i++) {
            cin>>val;
            p1[i] = val;
        }
        for(int i = 0; i < n; i++) {
            cin>>val;
            p2[i] = val;
        }
        for(int i = 0; i < n; i++) {
            cin>>val;
            p3[i] = val;
        }
    }

    void find() {
        int arr[3];

        arr[0] = minimum(p1,n);
        arr[1] = minimum(p2,n);
        arr[2] = minimum(p3,n);

        for(int i = 0 ; i < 3; i++)
            cout<<arr[i] << " ";
    }
};
