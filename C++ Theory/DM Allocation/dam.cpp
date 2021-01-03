#include<stdio.h>
using namespace std;
int main()
{
    int *p;
    float *q;
    char *r;
    p=new int(10);
    q=new float(1.5);
    r=new char('x');
    cout<<*p<<endl<<*q<<endl<<*r;
    delete p;
    cout<<*p<<endl<<*q<<endl<<*r;
    return 0;
}
