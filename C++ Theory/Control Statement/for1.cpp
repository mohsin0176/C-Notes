#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=0;i<=10;i++)
    {
        if(i==6)
        {
            break;
        }
        else
            {
            cout<<i<<"is printed number"<<endl;
            continue;
            }
    }
    return 0;
}
