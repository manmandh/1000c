#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    float S; float P;
    S=0; P=1;
    for(int i=1;i<=n;i++){
        P*=i;
        S+=P;
    }
    cout << S << endl;
}