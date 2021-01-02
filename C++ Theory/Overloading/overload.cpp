#include<iostream>
using namespace std;
class cal{
public:
    static int add(int a,int b)
    {
        return a+b;
    }
    static int add(int a,int b,int c)
    {
        return a+b+c;
    }
    };

    int main(void)
    {
        cal C;
        cout<<C.add(10,20);
        cout<<C.add(10,20,30);
        return 0;
    }
