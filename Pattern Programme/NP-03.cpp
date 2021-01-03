
#include<iostream>
using namespace std;
int main()
{
    int i,j,cnt,num=1;
    cin>>cnt;
    cout<<"\n";
    for(i=0;i<cnt;i++)
    {
        for(j=cnt;j>i;j--)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
        num=1;
    }
    return 0;
}
