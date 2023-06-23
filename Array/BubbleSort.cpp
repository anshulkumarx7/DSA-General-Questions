#include<iostream>
using namespace std;
void BubbleSort(int arr[],int size){
    
    for(int i=0;i<size-1;i++){
        int flag=0;
        for(int j=0;j<size-i+1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
}
int main(){
    int arr[50];
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    cout<<"Enter the elements of an array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,size);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}