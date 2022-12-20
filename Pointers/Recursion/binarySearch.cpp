#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){

if(size==0||size==1){
    return true;
}
if(arr[0]>arr[1]){
    return false;
}
bool ans = isSorted(arr+1, size-1);
return ans;
}

int main(){
int arr[5] = {2,4,7,9,11};
int size = 5;
bool ans = isSorted(arr,size);
if(ans==1){
    cout<<"true"<<endl;
}
if(ans==0){
    cout<<"false"<<endl;
}

}
