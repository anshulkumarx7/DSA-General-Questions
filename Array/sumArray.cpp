#include<iostream>
using namespace std;
int sumArray(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
void readArray(int arr[],int size){
    cout<<"Enter the elements in an array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    readArray(arr,size);
    cout<<"The sum of array is: "<<sumArray(arr,size);
    return 0;
}