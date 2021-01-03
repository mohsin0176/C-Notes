#include<iostream>
using namespace std;
int main()
{
    int a;cin>>a;
    int b;cin>>b;
    int ret;
    ret=max(a,b);
    cout<<ret;
    return 0;
}

int max(int num1,int num2)
{
    int result;
    result=num1+num2;
    return result;
}
