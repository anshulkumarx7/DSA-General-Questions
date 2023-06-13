#include<iostream>
using namespace std;
int pivotElement(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[10]={1,4,7,8,9,10,12,14,16,20};
    cout<<"The pivot element in an array is at index: "<<pivotElement(arr,1);
    return 0;
}