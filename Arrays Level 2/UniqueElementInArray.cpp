#include<iostream>
using namespace std;
void unique(int arr[],int n){
    for(int i=0;i<=n-1 ;i++){
        int count=0;
        for(int j=0 ; j<=n-1 ; j++){
            if(arr[i]==arr[j]){
               count++;
            }
        }
        if(count==1){
            cout<<arr[i];
            return;
        }
    }
}
int main(){
    int arr[]={2,2,1,1,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    unique(arr,n);
}