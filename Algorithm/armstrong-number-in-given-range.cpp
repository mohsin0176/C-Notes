#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,sum,r,t,mm;
    int sno,eno;
    cin>>sno>>eno;
    cout<<endl;
    for(num=sno;num<=eno;num++)
    {
        t=num;
        sum=0;
        while(t!=0)
        {
            r=t%10;
            mm=pow(r,3);
            sum=sum+mm;
            t=t/10;
        }
        if(sum==num)
        {
            cout<<num;
        }
    }
    cout<<endl;
    return 0;
}
