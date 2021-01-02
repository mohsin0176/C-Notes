#include<iostream>
using namespace std;
int main()
{
    int *p;
    int a;
    cin>>a;
    p=&a;
    cout<<p<<endl;
    cout<<*p<<endl;
    int *d;
    cin>>*d;
    cout<<d;
    return 0;
}
