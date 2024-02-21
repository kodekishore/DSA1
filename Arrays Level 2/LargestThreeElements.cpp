#include<iostream>
using namespace std;
void LargestThree(int arr[],int n){
    int max1=arr[0];
    for(int i=1;i<=n-1;i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
    int max2 =arr[0];
    for(int i=1;i<=n-1;i++){
        if(arr[i]!=max1 && max2<arr[i]){
            max2=arr[i];
        }
    }
    int max3 =arr[0];
    for(int i=1;i<=n-1;i++){
        if((arr[i]!=max1 && arr[i]!=max2) && max3<arr[i]){
            max3=arr[i];
        }
    }
    cout<<max1<<" "<<max2<<" "<<max3;
}
int main(){
    int arr[]={3,8,11,6,13,27,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"largest three elements in array : ";
    LargestThree(arr,n);
    
}