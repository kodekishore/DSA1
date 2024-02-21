#include<iostream>
using namespace std;
void difference(int arr[],int n){
    int sumeven=0;
    int sumodd=0;
    for(int i=0 ; i<=n-1 ; i++){
        if(i%2==0){
            sumeven+=arr[i];
        }
        else sumodd+=arr[i];
    }
    cout<<"difference between even and odd incides elements "<<endl<<sumeven-sumodd;
}
int main(){
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    difference(arr,n);

}