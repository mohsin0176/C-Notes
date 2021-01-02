#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void draw()=0;
};

class Rectangle : Shape

{
public:
    void draw()
    {
        cout<<"Drawing Rectangle......."<<endl;
    }
};

class Circle : Shape
{
    public:
    void draw()
    {
        cout<<"Drawing Circle...... ";
    }
};

int main()
{
    Rectangle rect;
    Circle cir;
    rect.draw();
    cir.draw();
    return 0;
}
