#include<iostream>
using namespace std;
double myPow(double a, int b) {
        if(b==0){
            return 1;
        }
        if(b==1){
            return a;
        }

        double ans = myPow(a,b/2);

        if(b%2 == 0){
            return ans * ans;
        }
        else{
            return a * ans * ans;
        }


    }
int main(){
int a,b;
cin>>a;
cin>>b;
int ans = myPow(a,b);
cout<<ans;

}
