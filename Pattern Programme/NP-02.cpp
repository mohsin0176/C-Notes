#include<iostream>
using namespace std;
int main()
{
    int i,j,cnt,num=1;
    cin>>cnt;
    cout<<"\n";
    for(i=0;i<cnt;i++)
    {
        num=1;
        for(j=0;j<=i;j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }
    return 0;

}
