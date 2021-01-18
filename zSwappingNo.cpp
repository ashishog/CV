#include <iostream>

using namespace std;

int main()
{

    int a,b;
    cout<<"Enter  Number : ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swaped Numbers are : "<<endl<<"a = "<<a<<","<<"b = "<<b;
    return 0;
}
