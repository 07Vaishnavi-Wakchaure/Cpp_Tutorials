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
