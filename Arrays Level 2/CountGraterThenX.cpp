#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
void count(int arr[],int n,int target){
        int count=0;
        for(int i=0 ; i<=n-1 ; i++){
            if(arr[i]>target)
                        count++;
        }
        cout<<count;
}
int main(){
    int arr[]={1,9,111,3,4,5,8,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=1;
    cout<<"display array : ";
    cout<<endl;
    display(arr,n);
    cout<<endl<<"no of vlaues grate then 1: "<<endl;
    count(arr,n,target);
}