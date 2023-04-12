/*
Tính S(n) = x^1/1 + x^2/(1+2)  + x^3/(1+2+3) + ⋯ + x^n/(1+2+3+...+n)

input
    x = 2
    n = 4
output
    2^1/1 + 2^2/(1+2) + 2^3/(1+2+3) + 2^4/(1+2+3+4)
    = 6.266666666666666
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n, x, sum=0;
    double s;

    cout << "Nhap x: "; 
    cin >> x;
    cout << "Nhap n: "; 
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        sum += i;
        s += pow(x, i) / (sum + 0.0);
    }
    cout << setprecision(5) << fixed << s << endl;
}