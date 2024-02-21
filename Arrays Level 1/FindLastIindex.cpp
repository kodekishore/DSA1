#include<iostream>
using namespace std;
void LastIndex(int arr[], int n, int target){
   for(int i=n-1 ; i>=0 ; i--){
        if(arr[i]==target){
            cout<<i;
            break;
        }
   }
}
int main(){
    int arr[8]={1,6,1,5,3,1,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 1;
    cout<<"Last index of repeted value  : ";
    LastIndex(arr,n, target); 
}