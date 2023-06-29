#include<iostream>
using namespace std;
void reverseString(char string[],int len){
    int s=0;
    int end=len-1;
    while(s<end){
        swap(string[s++],string[end--]);
    }
}
int getLength(char string[]){
    int count=0;
   for(int i=0;string[i]!='\0';i++){
    count++;
   }
   return count;
}
int main(){
    char string[100];
    cout<<"Enter the string:"<<endl;
    cin>>string;
    int len = getLength(string);
    cout<<len<<endl;
    reverseString(string,len);
    cout<<"After reversing the string :"<<string<<endl;
    return 0;
}