#include<iostream>
using namespace std;
int ap(int val){
    return (3*val+7);
}
int main(){
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"The answer is "<<ap(n)<<endl;
    return 0;
}