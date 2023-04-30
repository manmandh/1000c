/*
S(n) = 1 + x^1/1! + x^3/3! + x^5/5! + ... + x^2n+1/(2n+1)!

x = 2
S(5) = 1 + 2 + 2^3/(1*2*3) + 2^5/(1*2*3*4*5) + 2^7/(1*2*3*4*5*6*7)
    = 4.625396825396825
*/

#include<bits/stdc++.h>
using namespace std;

int Factorial(int n) {
    int fac = 1;
    for (int i = 2; i <= n; i++)
    {
        fac *= i;
    }
    return fac;
}

double total(int n, int x){
    double s = 0;
    for(int i=0;i<=n;i++){
        s+=(double)pow(x,2*i+1)/Factorial(2*i+1);
    }
    return s;
}

int main()
{
    int n ; cin >> n;
    int x ; cin >> x;
    cout << total(n,x);
}