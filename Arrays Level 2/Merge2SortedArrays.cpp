#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
void SortMethod1(int arr1[],int m,int arr2[],int n){
    int k =m+n-1;
    int i=m-1;
    int j=n-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k]=arr1[i];
            i--;
            k--;
        }
        else{
            arr1[k]=arr2[j];
            j--;
            k--;
        }
    }
    if(i<0){
        while(j>=0){
            arr1[k]=arr2[j];
            j--;
            k--;
        }
    }
    if(j<0){
        while(i>=0){
            arr1[k]=arr1[i];
            i--;
            k--;
        }
    }
    display(arr1,m+n);
}
int main(){
    int arr1[]={1,2,3};
    int arr2[]={2,5,6};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    cout<<endl<<"display array after sorting : "<<endl;
    SortMethod1(arr1,m,arr2,n);
}
