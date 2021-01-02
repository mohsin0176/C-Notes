#include<iostream>
using namespace std;

class Rectangle
{
protected:
    int height;

};
class Square:public Rectangle
{
public:
    void setHeight(int h)
    {
        height=h;
    }
    void displayHeight()
    {
        cout<<height<<endl;
    }
};
int main()
{
    Square square1;
    square1.setHeight(10);
    square1.displayHeight();
    return 0;
}
