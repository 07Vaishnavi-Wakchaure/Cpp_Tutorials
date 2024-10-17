//Day-3:Function
/*#include<iostream>
using namespace std;
int sum(int a,int b)//Function
{
    int c=a+b;
    return c;
}
int main()
{
    int num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2;
    cout<<"Sum is: "<<sum(num1,num2)<<endl;
    return 0;
}*/
//Here a and b are formal parameters and num1 and num2 are actual parameter
//Function prototyping
#include<iostream>
using namespace std;
int sum(int a,int b);
void g(void);
int main()
{
    int num1,num2;
    cout<<"Enter a number: ";
    cin>>num1;
    cout<<"Enter a number: ";
    cin>>num2;
    cout<<"Sum is: "<<sum(num1,num2)<<endl;
    g();
    return 0;
}

int sum(int a,int b)
{
    int c=a+b;
    return c;
}
void g()
{
  cout<<"\nHello,You are doing really well..!!...Keep going";
}
