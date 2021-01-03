#include<iostream>
using namespace std;
struct student
{
    char name[15];
    int roll;
    float marks;
};
int main()
{
    student s;
    cin>>s.name>>s.roll>>s.marks;
    cout<<s.name<<s.roll<<s.marks;

    return 0;
}
