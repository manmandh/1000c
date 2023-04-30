#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        S = 1.0 / (1.0 + S);
    }
    cout << "Result: " << S << endl;
    return 0;
}