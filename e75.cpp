#include<bits/stdc++.h>
using namespace std;

bool isCheckPow2(int n) {
    if(n<=0){
        return false;
    }
    // while (n>1){
    //     if(n%2!=0) {
    //         return false;
    //     }
    //     n/=2;
    // }
    // return true;
    int k = log2(n);
    return pow(2, k) == n;
}
//ex76
bool isCheckPow3(int n){
    if(n<=0){
        return false;
    }
    int j = log2(n);
    return pow(3,j) == n;
}

int main(){
    int n; cin >> n;
    if(isCheckPow2(n)){
        cout << "YES 2";
    }else{
        cout << "NO 2";
    }
    if(isCheckPow3(n)){
        cout << "YES 3";
    }else{
        cout << "NO 3";
    }
}
