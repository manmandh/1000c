/*
Tính S(n) = x^0/0! + x^2/2!  + x^4/4! + ⋯ + x^(2n)/2n!
input
    x = 2
    n = 4
output
    79/21~3.7619
    4!=4*(4-1)*(4-2)*1
*/
#include<bits/stdc++.h>
using namespace std;
int fac(int n){
int gt = 1;
    for(int i=2;i<=n;i++){
        gt*=i;
    }
    return gt;
}

double total(int n, int x){
double S = 0;
    for(int i=0;i<=2*n;i++){
        if(i%2==0){
            S+=(double)pow(x,i)/fac(i);
        }
    }
    return S;
}
int main(){
    int n; cin >> n;
    int x; cin >> x;
    cout << total(n,x);
}
