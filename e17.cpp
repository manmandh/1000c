/*
Tính S(n) = x^1/1! + x^2/2!  + x^3/3! + ⋯ + x^n/n!

input
    x = 2
    n = 4
output
    2^1/1 + 2^2/(1*2) + 2^3/(1*2*3) + 2^4/(1*2*3*4)
    = 6
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    int n, x, gt=1;
    double s;

    cout << "Nhap x: "; 
    cin >> x;
    cout << "Nhap n: "; 
    cin >> n;
    
    for(int i = 1; i <= n; i++) {
        gt *= i;
        s += pow(x, i) / gt;
    }
    cout << setprecision(4) << fixed << s << endl;
}