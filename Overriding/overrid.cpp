#include<iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"Eating Fruit"<<endl;
    }
};
class Dog : public Animal

{
public:
    void eat()
    {
        cout<<"Eating Bread"<<endl;
    }
};

int main(void)
{
    Dog d;
    d.eat();
    Animal m;
    m.eat();
    return 0;
}
