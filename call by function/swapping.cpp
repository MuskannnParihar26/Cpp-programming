#include <iostream>
using namespace std;

int swap(int &a,int &b)

{
   a=a+b;
   b=a-b;
   a=a-b;

}
int main()
{
    int x=10,y=20;
    swap(x,y);
    cout<<"x="<<x<<"y="<<y;

    return 0;
}