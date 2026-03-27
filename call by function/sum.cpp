#include <iostream>
using namespace std;

void add(int a, int b)
{
    int sum=a+b;
    cout<<"Sum inside function:"<<sum<<endl;
}

int main()
{
    int x=10,y=20;
    add(x,y);

    cout<<"Values outside function:"<<x<<" "<<y<<endl;
    return 0;
}