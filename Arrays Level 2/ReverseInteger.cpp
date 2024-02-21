#include<iostream>
using namespace std;
void reverse(int n){
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev = 10*rev + digit;
        n=n/10;
    }
    cout<<rev;
}
int main(){
    int n;
    cout<<"number before reverse: ";
    n=8432;
    cout<<n;
    cout<<endl<<"number after reverse : ";
    reverse(n);

}