#include<iostream>
using namespace std;
void difference(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        if(i%2==0){
            arr[i]+=10;
        }
        else arr[i]*=2;
    }
    for(int i=0;i<=n-1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    difference(arr,n);

}