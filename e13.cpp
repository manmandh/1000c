/*
Tính S(n) = 𝑥^2 + 𝑥^4 + 𝑥^6 + ⋯ + 𝑥^2n
x = 3
n = 3
3^2 + 3^4 + 3^6 = 819
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
    
    for(int i = 2; i <= n * 2; i+=2) {
        s += pow(x, i);
    }

    cout << s << endl;
}