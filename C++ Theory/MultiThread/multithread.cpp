#include<iostream>
#include<pthread.h>
using namespace std;
char* str="Child Thread";
void* fun(void *str)
{
    cout<<"Child Thread Created:"<<(char*)str;
}
int main()
{
    s=ctime(&Time);
    pthread_t t;
    pthread_create(&t,NULL,&func,(void*)str);
    pthread_create(threadID,attr,start_routine,arg);
    threadID=t,arg=(void*)str,attr=NULL,start_routine=func;
    cout<<"Main Thread Created"<<endl;
    pthread_join(t,NULL);
    exit(EXIT_SUCCESS);

    return 0;
}
