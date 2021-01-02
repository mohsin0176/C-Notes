#include<iostream>
using namespace std;
int change(int data);
int  main()
{
    int data=3;

    int x=change(data);
    cout<<x;
    return 0;
}
  int change(int data)
{
    data=5;
    return data;

}
