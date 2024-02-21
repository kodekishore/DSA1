#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
void SortMethod1(int arr1[],int n1,int arr2[],int n2){
    int arr[n1+n2];
    int i=0;
    int j=0;
    int k=0;
    while(i<=n1-1 && j<=n2-1){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
            k++;
        }
        else if(arr1[i]>arr2[j]){
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i>=n1){
        while(j<=n2-1){
            arr[k]=arr2[j];
            j++;
            k++;
        }
    }
     if(j>=n2){
        while(i<=n1-1){
            arr[k]=arr1[i];
            k++;
            i++;
        }
    }
    display(arr,n1+n2);
}
int main(){
    int arr1[]={1,4,5,8};
    int arr2[]={2,3,6,7,10};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    cout<<endl<<"display array after sorting : "<<endl;
    SortMethod1(arr1,n1,arr2,n2);
}