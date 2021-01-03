#include<iostream>
using namespace std;
int main()
{
    int power,base;
    cin>>power;
    cin>>base;
    int i,result=1;
    for(i=power;i>=1;i--)
    {
        result=result*base;
    }
    cout<<result;
    return 0;
}
