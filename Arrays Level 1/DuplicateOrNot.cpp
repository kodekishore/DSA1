#include<iostream>
using namespace std;
void check(int arr[],int n){
    int flag=0;
    for(int i=0 ; i<n-2 ; i++){
        for(int j=i+1 ; j<=n-1 ; j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==1){
        cout<<"array has duplicate elements";
    }
    else 
    cout<<"array dosen't have any duplicate";

}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    check(arr, n);
}