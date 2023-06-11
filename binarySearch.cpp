#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int start=0,end=n-1,mid;
    mid=start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;

}
int main(){
    int even[10]={0,1,3,7,9,10,11,16,18,20};
    int odd[10]={1,8,9,10,17,22,33,35,38};
    cout<<binarySearch(even,10,9)<<endl;
    cout<<binarySearch(odd,9,35)<<endl;

    return 0;
}