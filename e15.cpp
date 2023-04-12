/*
Tính S(n) = 1/1 + 1/1+2  + 1/1+2+3 + ⋯ + 1/1+2+3+...+n

input
    n = 9
output
    1/1 + 1/(1+2) + 1/(1+2+3) +  1/(1+2+3+4) +  1/(1+2+3+4+5) + 1/(1+2+3+4+5+6) + 1/(1+2+3+4+5+6+7) +  1/(1+2+3+4+5+6+7+8) 
    = 1.777777777777778
*/

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int n, x = 1, sum = 0;
    double s;

    cout << "Nhap n: "; 
    cin >> n;
    // cout << "Nhap x: ";
    // cin >> x;
    
    for(int i = 1; i <= n; i++) {
        sum += i;
        s += x / (sum + 0.0);
    }
    cout << setprecision(5) << fixed << s << endl;
}