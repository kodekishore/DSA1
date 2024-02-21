#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void Product(int arr[], int n){
    long long product=1;
    for(int i=0 ;i<=n-1 ;i++){
        product = product * arr[i];
    }
    cout<<product;
    }


int main(){
    int arr[]={2,-1,3,1,-4,-2,5,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"print normal array : ";
    display(arr,n);
    cout<<endl<<"the product of elemnts of an array : ";
    Product(arr,n);
    
    
    
}