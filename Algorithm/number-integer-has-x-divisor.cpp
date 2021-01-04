#include<iostream>
using namespace std;
int noofDivisors(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int l_limit,u_limit,num,i;
    cin>>l_limit>>u_limit;
    cin>>num;
    int count=0;
    for(i=l_limit;i<=u_limit;i++)
    {
        if(noofDivisors(i)==num)
        {
            cout<<i<<endl;
            count++;
        }
    }
    cout<<num<<endl<<count;
    return 0;
}
