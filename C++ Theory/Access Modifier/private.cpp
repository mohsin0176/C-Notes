#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    Rectangle rect1;
    rect1.length=10;
    rect1.breadth=20;
    cout<<rect1.area();

    return 0;
}
