
#include<iostream>
using namespace std;
int main()
{
    char line[100],alphabetstring[100];
    int j=0;
    cin.getline(line,100);
    for(int i=0;line[i] !='\0';i++)
    {
        if((line[i] >='a' && line[i]<='z'))
        {
            alphabetstring[j++]=line[i];
        }
    }
    alphabetstring[j]='\0';

    cout<<alphabetstring;
    return 0;
}
