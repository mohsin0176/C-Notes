#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m=1,k;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i>0)
        {
            for(k=1;k<=m;k++)
            {
                cout<<" ";
            }
            m=m+2;
            cout<<"*";
        }
        cout<<endl;
    }
    m=m-4;
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        for(k=1;k<=m;k++)
        {
            cout<<" ";
        }
        m=m-2;
        if(i !=n-1)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
