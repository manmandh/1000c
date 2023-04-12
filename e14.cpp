/*
Tính S(n) = 𝑥^1 + 𝑥^3 + 𝑥^5 + ⋯ + 𝑥^2n+1
x = 3
n = 3
2 * 3 + 1 = 7

3^1 + 3^3 + 3^5 = 273
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n, x;
    unsigned int s=0;

    cout << "Nhap x: "; 
    cin >> x;    
    cout << "Nhap n: "; 
    cin >> n;
    
    for(int i = 1; i < n * 2 + 1; i+=2) {
        s += pow(x, i);
    }
    cout << s << endl;
}