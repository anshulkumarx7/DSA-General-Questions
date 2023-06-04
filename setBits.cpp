#include<iostream>
using namespace std;
int setBits(int num){
    int count=0;
    while(num!=0){
        int bit=num&1;
        if(bit==1){
            count++;
        }
        num=num>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    int sb=setBits(a)+setBits(b);
    cout<<"The total number of setBits: "<<sb<<endl;
    return 0;
}