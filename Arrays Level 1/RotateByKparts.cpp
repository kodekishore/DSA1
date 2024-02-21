#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void ReverseByPart(int arr[], int n, int i, int j){
    while(i<=j){
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[8]={1,3,2,4,3,4,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k ;
    cout<<"enter the value of k: ";
    cin>>k;
    if(k>n){
        k=k%n;
    }
    cout<<"print initial array : ";
    display(arr,n);
    ReverseByPart(arr,n, 0,n-k-1); 
    ReverseByPart(arr,n, n-k,n-1);
    ReverseByPart(arr,n, 0,n-1);
    cout<<endl<<"print array after rotated by k parts : \n";
    display(arr,n);
    
}