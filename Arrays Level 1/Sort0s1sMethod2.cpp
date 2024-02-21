#include<iostream>
using namespace std;
void display(int arr[],int n){
    for(int i=0 ; i<=n-1 ;i++){
        cout<<arr[i]<<" ";
    }
}
void Sort0s1sMethod2(int arr[], int n){
    int i=0 ;
    int j=n-1;
    while(i<=j){
        if(arr[i]==1 && arr[j]==0){
         int temp = arr[i];
         arr[i]=arr[j];
         arr[j]=temp;
         i++;
         j--;
        }
        else if(arr[i]==0)
                        i++;
        else if(arr[j]==1)
                        j--;
    }
}
int main(){
    int arr[8]={1,0,1,0,1,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"print array before sorting : ";
    display(arr,n);
    Sort0s1sMethod2(arr,n);
    cout<<endl<<"print array after sorting : ";
    display(arr,n);
    
    
    
}