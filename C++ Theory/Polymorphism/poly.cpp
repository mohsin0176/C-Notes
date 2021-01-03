#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Eating......"<<endl;
    }
};
class Dog : public Animal
{
    public:
    void eat()
    {
        cout<<"Breading......"<<endl;
    }
};

int main()
{
    Dog d;
    Animal a;
    d.eat();
    a.eat();
    return 0;
}
