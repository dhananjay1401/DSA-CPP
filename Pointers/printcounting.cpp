#include<iostream>
using namespace std;

int counting(int n){

if(n==0){
    return 0;
}
//int small = counting(n-1);

counting(n-1);
cout<<n<<endl;

}

int main(){

int n;
cin>>n;
int ans = counting(n);
cout<<ans;

}
