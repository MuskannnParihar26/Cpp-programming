// Parametrized function and calling by using

#include <iostream>
using namespace std;
int add(int a,int b);   //function declaration
int add(int a,int b)    //function definition
{
    int c;
    //cout<<"enter the value of a & b";
    //cin>>a>>b;
    c=a+b;
    cout<<"addition is "<<c;
    
    return 0;
}
int main()
{
    add(150,200);

    return 0;
}