#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ; i++){
        cout<<arr[i]<<" ";
    }
}
void swap(int *l,int *h){
    int temp=*l;
    *l=*h;
    *h=temp;
}
void SortMethod2(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
                swap(&arr[low],&arr[mid]);
                low++;
                mid++;
                }
        else if(arr[mid]==2){
            swap(&arr[high],&arr[mid]);
                high--;
                
        }
        else if(arr[mid]==1){
                mid++;
        }

    }

}
int main(){
    int arr[]={0,1,2,0,0,2,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"display array before sorting : ";
    cout<<endl;
    display(arr,n);
    SortMethod2(arr,n);
    cout<<endl<<"display array after sorting : "<<endl;
    display(arr,n);
}