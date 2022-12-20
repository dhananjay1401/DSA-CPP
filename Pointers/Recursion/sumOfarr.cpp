#include<iostream>
using namespace std;


int sumOfArray(int *arr, int size){
if(size==0){
    return 0;
}
if(size==1){
    return arr[0];
}
    int remainingPart = sumOfArray(arr+1,size-1);
    int sum = arr[0] + remainingPart;
}

int main(){
int arr[5]={3,2,4,1,6};
int size = 5;

int add = sumOfArray(arr,size);
cout<<add<<endl;


}
