#include<iostream>
using namespace std;
// first and laast occurences in a sorted array.
// the total number of occurences in a sorted array.
int firstOccurence(int arr[],int n,int key){
    int start=0,end=n-1,mid,ans;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastOccurence(int arr[],int n,int key){
    int start=0,end=n-1,mid,ans;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    int even[10]={0,1,3,7,7,7,11,16,18,20};
    int odd[9]={1,8,9,10,17,22,33,33,38};
    cout<<firstOccurence(even,10,7)<<endl;
    cout<<lastOccurence(even,10,7)<<endl;
    cout<<"The total number of occurennnces:"<<lastOccurence(even,10,7)-firstOccurence(even,10,7)+1<<endl;
    cout<<firstOccurence(odd,9,33)<<endl;
    cout<<lastOccurence(odd,9,33)<<endl;


    return 0;
}