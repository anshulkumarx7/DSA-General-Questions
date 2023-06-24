#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
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
    insertionSort(arr,size);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}