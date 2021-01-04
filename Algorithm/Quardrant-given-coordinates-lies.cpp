#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x==0)
    {
        cout<<x<<","<<y<<"lies on y axis";
    }
    else if(y==0)
    {
        cout<<x<<","<<y<<"lies on x axis";
    }
    else if(x>0&&y>0)
    {
        cout<<x<<","<<y<<"lies on 1st Quardant";
    }
    else if(x<0&&y>0)
    {
        cout<<x<<","<<y<<"lies on 2nd Quardant";
    }
    else if(x<0&&y<0)
    {
        cout<<x<<","<<y<<"lies on 3rd Quardant";
    }

    else
    {
        cout<<x<<","<<y<<"lies on 4th Quardant";
    }
    return 0;
}
