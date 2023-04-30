#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        S = pow(S + i, (double) 1 / i);
    }
    cout << "Result: " << S << endl;
    return 0;
}