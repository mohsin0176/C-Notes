#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[15],s2[15],s3[150];
    cin>>s1;
    cin>>s2;
    strcat(s1,s2);
    strcpy(s3,s1);
    cout<<s3;
    return 0;
}
