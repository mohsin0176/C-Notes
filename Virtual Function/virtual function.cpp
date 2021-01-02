#include<iostream>
using namespace std;
class A{
public:
    virtual void display()
    {
        cout<<"Base class Invoked"<<endl;
    };

};

class B : public A
{
public:
    void display()
    {
        cout<<"Derived Class invoked"<<endl;
    }
};

int main()
{
    A* a;
    B b;
    a=&b;
    a->display();
    return 0;
}
