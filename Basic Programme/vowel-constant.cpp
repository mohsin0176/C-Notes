#include<iostream>
using namespace std;
int main()
{
    char c;
    char low,up;
    cin>>c;
    low=(c='a'||c=='e'||c=='i'||c=='o'||c=='u');
    up=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(low||up)
    {
        cout<<"Vowel";
    }
    else
    {
        cout<<"Constant";
    }

    return 0;
}
