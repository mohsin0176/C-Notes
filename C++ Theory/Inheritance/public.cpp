#include<iostream>
using namespace std;

struct A{
public:
    int p1;
protected:
    int p2;
private:
    int p3;
    };

struct B : public A
{
    void foo()
    {
        p1=0;
        p2=0;
        p3=0;

    }
};
B b;
b.p1=1;
b.p2=1;
b.p3=1;
