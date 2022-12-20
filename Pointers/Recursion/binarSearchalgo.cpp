#include<iostream>
using namespace std;

bool binarySearch(int *arr,int s, int e, int key){

if(s>e){
    return false;
}

int mid = (s+e)/2;

if(arr[mid]>key){
        return binarySearch(arr,mid+1,e,key);
}else if(arr[mid]<key){
        return binarySearch(arr,mid-1,e+1,key);
}else if(arr[mid]==key){
       return true;
}
}




int main(){

int arr[5]={3,2,4,1,6};
int s = 0;
int e = 5;
int key = 4;

bool ans = binarySearch(arr,s,e,key);
if(ans==1){
    cout<<"true";
}else{
cout<<"false";
}
}
