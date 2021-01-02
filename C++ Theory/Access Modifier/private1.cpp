#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length,breadth;
public:
    int area(int l,int b)
    {
        length=l;
        breadth=b;
        int area=length*breadth;
        cout<<area;
    }
};

int main()
{
    Rectangle rect1;
    rect1.area(10,20);
    return 0;
}
