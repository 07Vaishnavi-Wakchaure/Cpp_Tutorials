#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Your age: ";
    cin>>age;

    if(age<18)
    {
        cout<<"You can not come to party";
    }
    else if(age==18)
    {
        cout<<"You are 18 you can get a child pass";
    }
    else
    {
        cout<<"You can come to party";
    }
    return 0;
}
