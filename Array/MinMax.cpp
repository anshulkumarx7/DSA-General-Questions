#include<iostream>
using namespace std;
int getmax(int arr[],int size){
     int maximum=INT_MIN;
    for(int i=0;i<size;i++){
        maximum=max(maximum,arr[i]);
    }
    return maximum;
}
int getmin(int arr[],int size){
     int minimum=INT_MAX;
    for(int i=0;i<size;i++){
        minimum=min(minimum,arr[i]);
    }
    return minimum;
}
int main(){
    int array[10]={10,5,66,4,22,-2,8,-10,22,9};
    cout<<"The maximum element present in array: "<<getmax(array,10)<<endl;
    cout<<"The maximum element present in array: "<<getmin(array,10)<<endl;

    return 0;
}