#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int bit,answer=0,i=0,n;
    cout<<"Enter the decimal number"<<endl;
    cin>>n;
    while(n!=0){
        bit=n&1;
        answer=(bit * pow(10,i))+answer;
        i++;
        n=n>>1;
    }
    cout<<"The binary conversion :"<<answer<<endl;
    return 0;
}