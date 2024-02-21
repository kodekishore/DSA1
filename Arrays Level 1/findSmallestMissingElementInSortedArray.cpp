#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void check(int arr[], int n){
    for(int i=0 ;i<=n-1 ; i++){
        if(arr[i]!=i){
            cout<<"smallest missing element is : "<<i;
            break;
        }
    }

}

int main(){
    int arr[]={1,2,3,4,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    check(arr,n);
    
    
    
}