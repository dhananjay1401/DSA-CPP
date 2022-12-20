#include<iostream>
using namespace std;

void printArray(int arr[] ,int n){
for(int i=0
    ;i<n;i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}


void swapAlternate(int arr[],int n){

for(int i=0;i<n;i+=2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }

}
}

int main(){

int arr[5] = {3,4,5,6,7};

swapAlternate(arr,5);
printArray(arr,5);
}
