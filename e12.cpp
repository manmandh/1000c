//Tính S(n) = 𝑥^1 + 𝑥^2 + 𝑥^3 + ⋯ + 𝑥^𝑛 .
// 1 + 1^2 + 1^3 = 3
// 3 + 3^2 + 3^3 = 39
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
    
    for(int i = 1; i <= n; i++) {
        s += pow(x, i);
    }

    cout << s << endl;
}