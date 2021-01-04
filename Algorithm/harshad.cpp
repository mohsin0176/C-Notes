
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cin>>num;
    int n=num;
    while(num>0)
    {
        int rem=num%10;
        sum=sum+rem;
        num=num/10;

    }
    if(n%sum==0)
    {
        cout<<n<<"   Harshad Number";
    }
    else
    {
        cout<<n<<"  Not Harshad Number";
    }
    return 0;
}
