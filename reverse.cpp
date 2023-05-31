#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number to be reversed"<<endl;
    cin>>n;
    int rem, temp = 0;
    while (n != 0)
    {
        rem = n%10;
        n = n / 10;
        temp = temp * 10 + rem;
    }
    cout<<temp;
    return 0;
}