#include<iostream>
using namespace std;

bool linearSearch(int *arr,int n,int key){
if(n==0){
    return 0;
}
if(arr[0]==key){
    return true;
}else{\
bool remainingPart = linearSearch(arr+1,n-1,key);
return remainingPart;
}
}

int main(){

int arr[5]={3,2,4,1,6};
int n = 5;
int key = 9;

bool ans = linearSearch(arr,n,key);
if(ans==1){
    cout<<"true";
}else{
cout<<"false";
}
}
