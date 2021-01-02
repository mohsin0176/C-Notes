#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> :: iterator itr;
    v.insert(v.begin()+1,10);
    for(itr=v.begin;itr!=v.end();itr++)
    {
        cout<<*itr<<"";
    }
    return 0;
}
