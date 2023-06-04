#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={3,5,6,2,1,-22,3,34,56,78};
    if(linearSearch(arr,10,34)){
        cout<<"Present in array"<<endl;
    }
    else{
        cout<<"Absent in array"<<endl;
    }
    return 0;
}