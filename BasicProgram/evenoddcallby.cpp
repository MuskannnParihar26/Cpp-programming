#include <iostream>
using namespace std;
int even(int a);
int odd(int b);

int even(int a)
{
    if(a%2==0)
    cout<<"even number\n";
    return 0;
}
int odd(int b)
{
 if(b%2!=0)
   cout<<"odd number";
   return 0;
 
}
int main()
{
    int num;
    cout<<"Enter number: ";
    cin>>num;
    even(num);
    odd(num);
    return 0;
}
