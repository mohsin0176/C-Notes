#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n,result;
    int fact;
    cin>>n;
 result=factorial(n);
    cout<<result;
    return 0;
}
int factorial(int n)
{

    do

        {
            return n*factorial(n-1);

        }
    while(n!=0);

}
