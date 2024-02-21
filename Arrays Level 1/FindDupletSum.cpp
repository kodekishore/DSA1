#include<iostream>
using namespace std;
void DupletSum(int arr[], int n, int target){
    for(int i=0 ; i<=n-2 ; i++){
        for(int j=i+1 ; j<=n-1 ; j++){
            if(arr[i]+arr[j]==target){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
   
}
int main(){
    int arr[8]={1,3,2,4,3,4,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 7;
    cout<<"list of all posiblites sum = 7 : \n";
    DupletSum(arr,n, target); 
}