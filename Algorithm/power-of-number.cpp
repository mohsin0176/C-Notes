#include<iostream>
using namespace std;

int main()
{

    int base,result=1;
    int power;
    int i;
    cin>>base;
    cin>>power;
    for(i=1;i<=power;i++)
    {
        result=result*base;
    }
    cout<<result;
    return 0;
}
