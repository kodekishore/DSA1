#include<iostream>
using namespace std;
void reverse(int n){
    int org=n;
    int rev=0;
    while(n!=0){
        int digit=n%10;
        rev = 10*rev + digit;
        n=n/10;
    }
    cout<<rev<<endl;
    if(org==rev){
        cout<<"given number is palindrome";
    }
    else cout<<"given number is not a palindrome";
}
int main(){
    int n;
    cout<<"number before reverse: ";
    n=848;
    cout<<n<<endl;
    cout<<endl<<"number after reverse : ";
    reverse(n);

}