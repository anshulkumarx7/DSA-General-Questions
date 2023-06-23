#include<iostream>
using namespace std;
void SelectionSort(int arr[],int size){
    int mini;
    for(int i=0;i<size-1;i++){
        mini=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[mini],arr[i]);
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
    SelectionSort(arr,size);
    cout<<"Array after sorting"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    return 0;
}