#include<iostream>
using namespace std;
int main()
{
    int num,rem,sum=0,i;
    cin>>num;
    for(i=1;i<num;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not Perfect Number";
    }
    return 0;
}
