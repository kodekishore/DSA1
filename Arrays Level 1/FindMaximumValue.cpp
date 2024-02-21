#include<iostream>
using namespace std;
void FirstMax(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<=n-1 ; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max;
}
int main(){
    int arr[5]={5,6,55,44,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the first maximum value in array is : ";
    FirstMax(arr,n); 
}