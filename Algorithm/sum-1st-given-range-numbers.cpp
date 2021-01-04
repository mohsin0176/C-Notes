
#include<iostream>
using namespace std;
int main()
{
    int sum=0,start,last;
    cin>>start>>last;
    for(int i=start;i<=last;i++)
    {
        sum+=i;
    }
    cout<<sum;
    return 0;
}
