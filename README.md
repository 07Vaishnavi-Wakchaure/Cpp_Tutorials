# Cpp_Tutorials
#Day-01
---- Variables,Comments ---- 
//Day-1 Comment is a part which is informative for programmer and ignored by compiler
#include<iostream> //header file
using namespace std;
int main() //Entry point of code
{
    int a=4;//Variable assignment
    int b=5;
    float pi=3.14;
    char c='V';
    is_true=true;
    cout<<"If value is correct return 1: "<<is_true;
    cout<<"\nValue of c is: "<<c;
    cout<<"\nValue of pi is: "<<pi;
    cout<<"\nValue of a is: "<<a<<"\n Value of b is: "<<b;
    cout<<"\nHello world";
    return 0;
}
---- Local and Global scope ----
#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<glo;
}
int main()
{
    int glo=8;
    glo=9;
    sum();
    return 0;
    cout<<glo;
}
---- Input/output stream ----
#include<iostream>
using namespace std;
int main(){
int num1,num2;
cout<<"Enter value: ";
cin>>num1;
cout<<"Enter another value: ";
cin>>num2;
cout<<"\nSum of num1 and num2 is: "<<num1+num2;
cout<<"\nSub of num1 and num2 is: "<<num1-num2;
cout<<"\nMul of num1 and num2 is: "<<num1*num2;
cout<<"\nDiv of num1 and num2 is: "<<num1/num2;
return 0;
}
