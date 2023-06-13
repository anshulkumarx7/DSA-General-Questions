#include<iostream>
using namespace std;
long long int binarySearch(int n){
    int s=0,e=n/2;
    long long int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(mid==n){
            return mid;
        }
        else if(mid*mid>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double morePrecision(int tempSolution,int n,int precision){
    double factor=1;
    double ans=tempSolution;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=tempSolution;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
};

int main(){
    int tempSolution=binarySearch(101);
    double ans=morePrecision(tempSolution,101,3);
    cout<<ans;
    return 0;
}