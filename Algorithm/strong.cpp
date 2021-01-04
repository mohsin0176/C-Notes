#include<iostream>
using namespace std;
int main()
{
    int ip,sum=0;
    cin>>ip;
    int save=ip;
    while(ip)
    {
        int num=ip%10;
        int fact=1;
        for(int i=num;i>0;i--)
        {
            fact=fact*i;
        }
        sum+=fact;
        ip/=10;
    }
    if(sum==save)
    {
        cout<<save<<"strong number";
    }
    else
    {
        cout<<save<<"not strong number";
    }
    return 0;
}
