#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int x; cin >> x;
    float S=1;
    for(int i=1;i<=n;i++){
        S=S*x;
    }
    cout << x << "^" << n << " is: " << S << endl;
}
/*
x^n=x*x*x*x
4^3 = 4*4*4
i^j= i*i*i lần j
2^7 = 2*2*2*2*2*2*2
*/