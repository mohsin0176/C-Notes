#include<iostream>
using namespace std;
int main()
{
     template <typename T>
    void printSum(T add1,T add2)
    {
        std::cout<<(add1+add2)<<std::endl;
    }
   printSum(4,5);
   printSum(5,6);
    return 0;
}
