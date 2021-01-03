
#include<iostream>
using namespace std;
int main()
{
    int i,j,k,temp,rows,num=1,decr=8,count=0;
    cin>>rows;
    for(i=0;i<rows;i++)
    {
        for(k=0;k<decr;k++)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            count++;
        }
        num=count;
        temp=num;
        for(j=0;j<i;j++)
        {
            cout<<num--<<" ";
        }
        cout<<"\n";
        num=temp;
        decr=decr-2;
    }
    return 0;
}
