#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    int start=0,immediate=1;
    while(start < (size-1) || (immediate+1) <= (size-1)){
        swap(arr[start],arr[immediate]);
        start=start+2;
        immediate=immediate+2;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
void readArray(int arr[],int size){
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter the size of Array:"<<endl;
    cin>>size;
    readArray(arr,size);
    cout<<"Before Swapping:"<<endl;
    printArray(arr,size);
    swapAlternate(arr,size);
    cout<<endl<<"After Swapping:"<<endl;
    printArray(arr,size);
    return 0;
}