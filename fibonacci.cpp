#include<iostream>
using namespace std;

int main(){
    int a=0,b=1;
    int n,nextSum;
    cout<<"Enter the terms upto which you want to print Fibonacci Series"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n-2;i++){
        nextSum=a+b;
        cout<<nextSum<<" ";
        a=b;
        b=nextSum;
    }
    return 0;
}