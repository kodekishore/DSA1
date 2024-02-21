#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void Sort0s1sMethod1(int arr[], int n){
    int noz=0;
    int noo=0;
    int sort[n];
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i]==0)
            noz++;
        else 
            noo++;
    }
    for(int i=0 ; i<=n-1 ;i++){
        if(i<=noz-1)
            arr[i]=0;
        else
            arr[i]=1;
    }
}
int main(){
    int arr[8]={1,0,1,0,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"print array before sorting : ";
    display(arr,n);
    Sort0s1sMethod1(arr,n);
    cout<<endl<<"print array after sorting : ";
    display(arr,n);
    
    
    
}