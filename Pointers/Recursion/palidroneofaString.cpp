#include<iostream>
using namespace std;
bool checkPalindrome(string& str, int i, int j) {
    if(i>j)
        return true;
    if(str[i]!=str[j]){
        return false;
    }

    return checkPalindrome(str,i+1,j-1);
}

int main(){

string name = "abbbri";
    int ans = checkPalindrome(name,0,name.length()-1);
    if(ans==1){
    cout<<"true";
}else{
cout<<"false";
}

}

