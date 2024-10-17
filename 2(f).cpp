#include<iostream>
using namespace std;
//For Loop
int main()
{
    int a=17;
    int i=1;
    for(i=1;i<=10;i++)
    {
        cout<<a*i<<endl;
    }
    return 0;
}
//While loop
int main()
{
    int a=19;
    int i=1;
    while(i<=10)
    {
        cout<<a*i<<endl;
        i++;
    }
    return 0;
}
//do while loop
int main()
{
    int a=9;
    int i=1;
    do{
        cout<<a*i<<endl;
        i++;
    }
    while(i<=10);
    return 0;
}
