#include <iostream>
using namespace std;
struct A{
public:
    int p1;
private:
    int p2;
protected:
    int p3;
    };

    struct B :private A{
    void foo()
    {
        p1=0;
        p2=0;p3=0;
    }
    };

    B b;
    b.p1=1;
    b.p2=14;
    b.p3=1;
