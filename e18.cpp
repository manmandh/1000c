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
int giaiThua(int n){
    int gt =1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}
int tu = 1;
int Tu(int n, int &x){
    for(int i = 1; i <= n; i++) {
        tu+= pow(x, i);
    }
}
int main(){
    int x, n;
    float S=0;

    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x; 

    int a[100001];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        S+=Tu(n,x)/giaiThua(a[i]);
    }
    cout<<S<<endl;
}
