#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void SortNegetivePositive(int arr[], int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        else if(arr[i]<0 || arr[i]==0)
                        i++;
        else if(arr[j]>0 || arr[i]==0)
                        j--;
        }
    }


int main(){
    int arr[]={2,-1,3,1,-4,-2,5,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"print array before arranging : ";
    display(arr,n);
    SortNegetivePositive(arr,n);
    cout<<endl<<"print array after arranging -ve's and +ve's : ";
    display(arr,n);
    
    
    
}