#include<iostream>
using namespace std;
void sum(int n){
    int sum=0;
    while(n!=0){
        int digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<sum;
}
int main(){
    int n;
    cout<<"display the number : ";
    n=8432;
    cout<<n;
    cout<<endl<<"sum of digits of number : ";
    sum(n);

}