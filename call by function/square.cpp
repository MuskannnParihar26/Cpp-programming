#include <iostream>
using namespace std;

void square(int n)
{
    n = n*n;
    cout<<"Square inside function:"<<n<<endl;
}

int main()
{
    int a=4;
    square(a);

    cout<<"Value outside function:"<<a<<endl;
    return 0;
}