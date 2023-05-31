#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,digit,answer=0,i=0;
    cout<<"Enter the binary Number"<<endl;
    cin>>n;
    while(n!=0){
        digit=n%10;
        if(digit == 1){
            answer=answer+pow(2,i);
        }
        i++;
        n=n/10;
    }
    cout<<"The decimal conversion is: "<<answer<<endl;
    return 0;
}