#include<bits/stdc++.h>
using namespace std;
void ex23(){
    int n; cin >> n;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    cout << "Number of divisors of" << n << "is " << count << endl;
}

void ex24(){
    int n; cin >> n;
    for(int i=1;i<=n;i++){
        bool isDivisor = (n%i==0);
        bool isOdd = (i%2==1);
        if(isDivisor && isOdd) {
            cout << i << " ";
        }
    }
}

void ex25(){
    int n; cin >> n;
    long long s = 0;
    for (int i=1;i<=n;i++) {
        if (n%i==0 && i%2==0) {
            s+= i;
        }
    }
}

void ex26(){
    int n; cin >> n;
    long long s = 0;
    for (int i=1;i<=n;i++) {
        if (n%i==0 && i%2==1) {
            s*=i;
        }
    }
}

void ex27(){
    int n; cin >> n;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0 && i%2==0){
            count++;
        }
    }
    cout << "Number of  oven divisors of" << n << "is " << count << endl;
}

void ex28(){
    int n; cin >> n;
    int s=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            s+=i;
        }
    }
    cout << s << endl;
}

int ex29(int n) {
    for (int i=n/2; i >= 1; i--) {
        if (n%i==0 && i%2==1) {
            return i;
        }
    }
    return -1;
}

bool isEx30(int n){
    int s=0;
    for(int i=1;i<n;i++){
        if(n%i==0) {
            s+=i;
        }
    }
    return s==n;
}

void ex34(){
    int n; cin >> n;
    double s=0;
    for(int i=n;i>0;i--){
        s=sqrt(s+i);
    }
    cout << s << endl;
}

int gt(int n){
    long gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}

void ex35(){
    int n; cin >> n;
    double s=0;
    for(int i=1;i<=n;i++){
        s=sqrt(s+i);
    }
    cout << s << endl;
}

void ex36(){
    int n; cin >> n;
    double s=0;
    for(int i=1;i<=n;i++){
        s=sqrt(s+gt(i));
    }
    cout << s << endl;
}

void ex38(){
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        S = pow(S + i, (double) 1 / (i+1));
    }
    cout << "Result: " << S << endl;
}

void ex39(){
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        S = pow(S + gt(i), (double) 1 / (i+1));
    }
    cout << "Result: " << S << endl;
}

void ex40(){
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    int x; 
    cout << "Enter value x: ";
    cin >> x;
    for (int i = 0; i <= n; i++) {
        S = sqrt(S+ pow(x,i));
    }
    cout << "Result: " << S << endl;
}

void ex41(){
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i <= n; i++) {
        S = pow(S + 1, -1);
    }
    cout << "Result: " << S << endl;
}

void ex42(){
    int n;
    double S=0.0;
    cout << "Enter n: ";
    cin >> n;
    int index=0;
    while(index < n){
        index++;
        S+=index;
    }
    cout << index << endl;
}

void ex43(){
    int n; cin >> n;
    int count = 0;
    while(n!=0){
        count++;
        n /= 10;
    }
    cout << count << endl;
}

void ex44(){
    int n; cin >> n;
    long s=0;
    while(n!=0){
        int k = n%10;
        s+=k;
        n/=10;
    }
    cout << s << endl;
}

void ex45(){
    int n; cin >> n;
    long kq=1;
    while(n!=0){
        int k=n%10;
        kq*=k;
        n/=10;
    }
    cout << kq << endl;
}

void ex46(){
    int n; cin >> n;
    int count = 0;
    while(n!=0){
        int k = n%10;
        if(k%2!=0){
            count++;
        }
        n/=10;
    }
    cout << count << endl;
}

void ex47(){
    int n; cin >> n;
    int count = 0;
    while(n!=0){
        int k = n%10;
        if(k%2==0){
            count++;
        }
        n/=10;
    }
    cout << count << endl;
}

void ex48(){
    int n; cin >> n;
    int kq = 1;
    while(n!=0){
        int k=n%10;
        if(k%2!=0){
            kq*=n%10;
        }
        n/=10;
    }
    cout << kq << endl;
}

void ex49(){
    int n, k; cin >> n;
    while(n!=0){
        k=n%10;
        n/=10;
    }
    cout << k << endl;
}

void ex50(){
    int n; cin >> n;
    int k=0;
    while(n!=0){
        k=k*10 +n%10;
        n/=10;
    }
    cout << k << endl;
}

void ex51(){
    int n; cin >> n;
    int max = INT16_MIN;
    while(n!=0){
        int k = n % 10; 
        if (k > max) {
        max = k;
    }
        n /= 10;
    }
    cout << max << endl;
}

void ex52(){
    int n; cin >> n;
    int min = INT16_MAX;
    while(n!=0){
        int k = n % 10; 
        if (k < min) {
        min = k;
    }
        n /= 10;
    }
    cout << min << endl;
}

void ex53(){
    int n; cin >> n;
    int max = INT_MIN;
    int count = 0;
    while(n!=0) {
    int k = n % 10;
    if(max < k) {
        max = k;
        count = 0;
    }
    if(max == k) {
        count++;
    }
        n /= 10;  
    }
    cout << count;
}

void ex54(){
    int n; cin >> n;
    int min = INT_MAX;
    int count = 0;
    while(n!=0) {
    int k = n % 10;
    if(min > k) {
        min = k;
        count = 0;
    }
    if(min == k) {
        count++;
    }
        n /= 10;  
    }
    cout << count;
}

void ex55(){
    int n; cin >> n;
    int count = 0;
    int temp = n;
    int k;
    while(n!=0){
        k=n%10;
        n /= 10;
    }
    while(temp){
        if(k == (temp % 10))
        count++;
        temp /= 10;
    }
    cout << count << endl;
}

bool isEx56(){
    int n; cin >> n;
    while(n!= 0){
    int k = n % 10;
    if(k%2 == 0){
        return false;
    }
    n /= 10;
}   
    return true;
}

bool isEx57(){
    int n; cin >> n;
    while(n!= 0){
    int k = n % 10;
    if(k%2!= 0){
        return false;
    }
    n /= 10;
}   
    return true;
}


int main(){
    //ex23();
    //ex24();
    //ex25();
    //ex26();
    //ex27();
    //ex28();
    //ex29(100);
    //isEx30(30);
    //ex34();
    //ex35();
    //ex36();
    //ex38();
    //ex39();
    //ex40();
    //ex41();
    //ex42();
    //ex43();
    //ex44();
    //ex45();
    //ex46();
    //ex47();
    //ex48();
    //ex49();
    //ex50();
    //ex51();
    //ex52();
    //ex53();
    //ex54();
    //ex55();
    //isEx56();
    //isEx57();
    

    //ex64-65-66();-giải phương trình
    return 0;
}