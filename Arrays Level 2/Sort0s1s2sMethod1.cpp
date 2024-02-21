#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
void SortMethod1(int arr[],int n){
    int noz=0;
    int noo=0;
    int noto=0;
    for(int i=0 ; i<=n-1 ; i++){
        if(arr[i]==0)
                    noz++;
        else if(arr[i]==1)
                    noo++;
        else
            noto++;
    }
    for(int i=0 ; i<=n-1 ; i++){
        if(i<=noz-1)
                arr[i]=0;
        else if(i<noz+noo)
                arr[i]=1;
        else 
            arr[i]=2;
    }

}
int main(){
    int arr[]={0,1,2,0,0,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"display array before sorting : ";
    cout<<endl;
    display(arr,n);
    SortMethod1(arr,n);
    cout<<endl<<"display array after sorting : "<<endl;
    display(arr,n);
}