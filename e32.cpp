#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int i=0;
    while(i*i<=n){
        if(i*i==n){
            cout << "YES";
            return false;
        }
        i++;
    }
    cout << "NO";
}