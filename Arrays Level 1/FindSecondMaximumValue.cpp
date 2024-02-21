#include<iostream>
using namespace std;
void SecondMax(int arr[], int n){
    int max1=arr[0];
    for(int i=1; i<=n-1 ; i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
    }
    int max2=arr[0];
    for(int i=1 ; i<=n-1 ; i++){
            if(arr[i]!=max1 && max2<arr[i])
            {
                max2=arr[i];
            }
    }
    cout<<max2;
}
int main(){
    int arr[5]={5,6,55,44,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"the second maximum value in array is : ";
    SecondMax(arr,n); 
}