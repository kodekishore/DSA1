#include<iostream>
using namespace std;
void check(int arr[],int n){
    bool flag=1;
    for(int i=0;i<=n-2;i++){
        if(arr[i]>arr[i+1]){
            flag=0;
        }
    }
    if (flag==1)
    {
        cout<<"array is sorted";
    }
    else 
        cout<<"array is not sorted";
    
}
int main(){
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    check(arr,n);

}