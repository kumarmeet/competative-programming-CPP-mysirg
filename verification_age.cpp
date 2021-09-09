#include <bits/stdc++.h>

using namespace std;

class Person {
  private:
    int age;
    char gender;
  public:
    Person(int age, int gender) {
        this->age = age;
        this->gender = gender;
    }

    int getAge() {
        return age;
    }

    char getGender() {
        return gender;
    }
};

class Verification {
  public:
    virtual void verify(Person &p) {
        if((p.getGender() == 'f' && p.getAge() >= 18) || (p.getGender() == 'm' && p.getAge() >= 18))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
};

class LicenceAgeVerification:public Verification {

};

class MarriageAgeVerification:public Verification {
  public:
    //late binding
    virtual void verify(Person &p) {
        if(p.getGender() == 'f' && p.getAge() >= 18)
            cout<<1<<endl;
        else if(p.getGender() == 'm' && p.getAge() >= 21)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
};
class VoterAgeVerification:public Verification {

};
