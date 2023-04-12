#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    float S=1;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            S*=i;
        }
    }
    cout << S << endl;
}