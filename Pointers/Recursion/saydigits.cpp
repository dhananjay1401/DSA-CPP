#include<iostream>
using namespace std;

int sayDigits(int n, string arr){
if(n==0){
    cout<<"zero"<<endl;
}
int digit = n%10;
n = n/10;

sayDigits(n,arr);
cout<<arr[digit]<<endl;

}

int main(){

string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"};

int n;
cin>>n;

sayDigits(n,arr);

}
