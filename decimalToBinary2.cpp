#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int rem,n,answer=0,i=0;
    cout<<"Enter the decimal number:"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%2;
        answer=(rem* pow(10,i))+answer;
        i++;
        n=n/2;
    }
    cout<<"The binary conversion is: "<<answer;
    return 0;
}