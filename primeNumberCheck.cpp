#include<iostream>
using namespace std;

int main(){
    int n,i,flag=0;
    cout<<"Enter the number to be checked as prime:"<<endl;
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(i%n==0 ){
            flag=1;
            break;
        }
    }
    if(flag==0 && n!=1){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Composite Number"<<endl;
    }

    return 0;
}