#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=2;i<=(n-1);i++)
    {
        if(n%i==0)
        {
            cout<<"Number is Not Prime";
            break;
        }
        else
        {
            continue;
        }
    }
    return 0;
}

