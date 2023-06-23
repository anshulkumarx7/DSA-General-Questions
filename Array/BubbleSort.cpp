#include<iostream>
using namespace std;
void BubbleSort(int arr[],int size){
    
    for(int i=0;i<size;i++){
        int flag=0;
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=1;
            }
        }
        cout<<"round+1"<<endl;
        if(flag==0){
            cout<<"hii";
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