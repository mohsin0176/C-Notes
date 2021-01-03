#include<iostream>
using namespace std;
class ParamA{
private:
    int b,c;
public:
    ParamA(int b1,int c1)
    {
        b=b1;c=c1;
    }
    int getX()
    {
        return b;
    }
    int getY()
    {
        return c;
    }
    };

    int main()
    {
        ParamA p1(10,15);
        cout<<p1.getX()<<endl;
        cout<<p1.getY();
        return 0;
    }
