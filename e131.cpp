#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void ex131(int a[100], int n){
    for(int i=0; i<n;i++){
        cout << a[i] << " ";
    }
}

void ex132(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            cout << a[i] << " ";
        }
    }
}

void ex133(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]<0){
            cout << i << " ";
        }
    }
}

void ex134(int a[], int n){
    int max = a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    cout << "Max is: " << max << endl;
}


void ex135(int a[], int n){
    bool check = false;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            cout << a[i] << " ";
            check = true;
            break;
        }
    }
    if(!check) cout << "-1" << endl;
}

void ex136(int a[], int n){
    bool check = false;
    for(int i=n-1; i>=0 ; i--){
        if(a[i]%2==0){
            cout << a[i] << " ";
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex137(int a[], int n){
    int min = INT_MAX;
    int pos=0;
    for(int i=0; i<n;i++){
        if(min>a[i]){
            min=a[i];
            pos=i;
        }
    }
    cout << pos << endl;
}

void ex138(int a[], int n){
    bool check = false;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            cout << i << " ";
            check=true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex139(int a[], int n){
    bool check = false;
    int pos = 0;
    for(int i=n-1; i>=0; i--){
        double sum=0;
        for(int j=1; j<a[i]; j++){
            if(a[i]%j==0){
                sum+=j;
                pos = i;
            }
        }
        if(sum==a[i]){
            cout << pos << " ";
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex140(int a[], int n){
    bool check = false;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            check = true;
            if(min > a[i]){
                min=a[i];
            }
        }
    }
    if(check){
        cout << "Value > 0 is Min: " << min << endl;
    }else{
        cout << "-1" << endl;
    }
}

void ex141(int a[], int n){
    bool check = false;
    int min = INT_MAX;
    int pos=0;
    for(int i=0; i<n;i++){
        if(a[i]>0){
            check=true;
            if(min>a[i]){
                min=a[i];
                pos=i;
            }
        }
    }
    if(check){
        cout << "Pos > 0 is Min: " << pos << endl;
    }else{
        cout << "-1" << endl;
    }
}

void ex142(int a[], int n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout << "Min is: " << min << endl;
}

void ex143(int a[], int n){
    bool check = false;
    for(int i=0; i<n ; i++){
        if(a[i]%2==0){
            cout << a[i] << " ";
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

bool isCheckPrime(int n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void ex144(int a[], int n){
    bool check = false;
    for(int i=0;i<n;i++){
        if(isCheckPrime(a[i])){
            cout << a[i];
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex145(int a[], int n){
    bool check = false;
    for(int i=0; i<n; i++){
        double sum=0;
        for(int j=1; j<a[i]; j++){
            if(a[i]%j==0){
                sum+=j;
            }
        }
        if(sum==a[i]){
            cout << sum << " ";
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex146(int a[], int n){
    bool check = false;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            cout << a[i] << " ";
            check = true;
            break;
        }
    }
    if(!check) cout << "-1" << endl;
}

void ex147(int a[], int n){
    bool check = false;
    for(int i=n-1; i>=0; i--){
        if(a[i]>0){
            cout << a[i] << " ";
            check = true;
            break;
        }
    }
    if(!check) cout << "-1" << endl;
}

void ex148(int a[], int n){
    bool check = false;
    for(int i=n-1;i>=0;i--){
        if(isCheckPrime(a[i])){
            cout << a[i];
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex149(int a[], int n){
    bool check = false;
    for(int i=n-1; i>=0; i--){
        double sum=0;
        for(int j=1; j<a[i]; j++){
            if(a[i]%j==0){
                sum+=j;
            }
        }
        if(sum==a[i]){
            cout << sum << " ";
            check = true;
            break;
        }
    }
    if(!check){
        cout << "-1";
    }
}

void ex150(int a[], int n){
    bool check = false;
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]<0){
            check = true;
            if(max<a[i]){
                max=a[i];
            }
        }
    }
    if(check){
        cout << "Value < 0 is Max: " << max << endl;
    }else{
        cout << "-1" << endl;
    }
}

void ex151(int a[], int n){
    int max = a[0];
    bool check = false;
    for(int i=0; i<n; i++){
        if(isCheckPrime(a[i])){
            check=true;
            if(a[i]>max){
                max=a[i];
            }
        }
    }
    if(check){
        cout << "Max prime is: " << max;
    }else{
        cout << "-1";
    }
}

void ex152(int a[], int n){
    bool check = false;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=1; j<a[i]; j++){
            if(a[i]%j==0){
                sum+=j;
            }
        }
        if(sum==a[i]){
            check = true;
            if(a[i]<min){
                min=a[i];
            }
        }
    }
    if(check){
        cout << min;
    }else{
        cout << "-1";
    }
}

void ex153(int a[], int n){
    bool check = false;
    int min = INT_MAX;
    for(int i=0; i<n ; i++){
        if(a[i]%2==0){
            check = true;
            if(min>a[i]){
                min=a[i];
            }
        }
    }
    if(check){
        cout << min;
    }else{
        cout << "-1";
    }
}

void ex154(int a[], int n){
    bool check = false;
    int max = a[0];
    int pos=0;
    for(int i=0; i<n ; i++){
        if(a[i]<0){
            check = true;
            if(max< a[i]){
                max=a[i];
                pos=i;
            }
        }
    }
    if(check){
        cout <<"Pos < 0 max is: " << pos;
    }else{
        cout << "-1";
    }
}


void ex155(int a[], int n){
    int space = INT_MIN;
    int index = 0;
    int x; cout << "enter x = "; cin >> x;
    for(int i = 0; i < n; i++) {
        int space2 = abs(a[i] - x);
        if(space2 > space) {
            space = space2;
            index = i;
        }
    }
    cout << a[index] << endl;
}

void ex157(int a[], int n){
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    cout << "["<<min<<", "<<max<<"]"; 
}

void ex158(int a[], int n){
    int max = a[0];
    for(int i=1;i<0;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout << abs(max) << endl;
}

void ex159(int a[], int n){
    bool check = false;
    for(int i=0;i<n;i++){
        if(a[i]>2003){
            cout << a[i] << endl;
            check=true;
            break;
        }
    }
    if(!check) cout << "0";
}

void ex160(int a[], int n){
    int value = 0;
    for(int i=n-1;i>=0;i--){
        if(a[i]<0 && a[i] > -1){
            value=a[i];
            break;
        }
    }
    cout << value;
}

void ex161(int a[], int n, int x, int y){
    for(int i=0;i<n;i++){
        if(a[i]>=x && a[i]<=y){
            cout << a[i] <<" ";
        }
    }
    cout << x << endl;
}

void ex162(int a[], int n){
    bool check = false;
    int pos=0;
    for(int i=1;i<n-1;i++){
        if(a[i]==a[i-1]*a[i+1]){
            pos=i;
            check = true;
        }
    }
    if(check){
        cout << pos << endl;
    }else{
        cout << "-1";
    }
}

void ex163(int a[], int n){
    for(int i=0; i<n; i++){
        int numSqr = sqrt(a[i]);
        if(numSqr*numSqr==a[i]){
            cout << a[i];
            break;
        }
    }
}

void ex165(int a[], int n){
    for(int i=0;i<n;i++){
        int value = abs(a[i]);
        while(value>=10){
            value/=10;
        }
        if(value%2==1){
            cout << a[i];
        }else{
            cout << "0";
        }
    }
}
void ex166(int a[], int n){
    for(int i=0;i<n;i++){
        if(log2(a[i])==floor(log2(a[i]))){
            cout << a[i] << " ";
        }else{
            cout << "0";
        }
    }
}

bool isOddNumber(int n){
    while(n>0){
        int k = n%10;
        if(k%2==0){
            return false;
        }
        n/=10;
    }
    return true;
}

int ex167(int a[], int n){
    bool check = false;
    int max = INT_MIN;
    for(int i=0; i<n;i++){
        if(isOddNumber(a[i]) && a[i]>max){
            max=a[i];
            check = true;
        }
    }
    if(check){
        cout << max << endl;
    }else{
        cout << "0" << endl;
    }
}

void ex168(int a[], int n){
    int maxx = INT_MIN;
    bool check = false;
    for(int i=0;i<n;i++){
        if(a[i]>0 && log10(a[i])/log10(5)==floor(log10(a[i]/log10(5)))) {
            int pow = log10(a[i]/log10(5));
            maxx = max(maxx, pow);
            check = true;
        }
    }
    if(check){
        cout << pow(5, maxx);
    }else{
        cout << "0";
    }
}

void ex169(int a[], int n){
    int min= INT_MAX;
    int max = INT_MIN;
    bool check = false;
    //Value Odd min
    for(int i=0;i<n;i++){
        if(a[i]%2==1 && a[i]<min){
            min = a[i];
        }
    }

    //Oven max < Odd min
    for(int i=0;i<n;i++){
        if((a[i]%2==0) && (a[i]< min) && (a[i]> max)){
            max = a[i];
            check=true;
        }
    }
    
    if(check){
        cout << "Oven max < Odd Min" << max << endl;
    }else{
        cout << "No exists" << endl;
    }
}

void ex170(int a[], int n){
    int max = INT_MIN;
    for(int i=0; i<n; i++){
        if(a[i]> max){
            max=a[i];
        }
    }
    int prime = max+1;
    while(!isCheckPrime(prime)){
        prime++;
    }
    cout << prime << endl;
}



int main() {
    int a[] = {-8,-1,-2, 8128, 10, 1, 2, 3, 4, 5, 15, 6, 9};
    //ex131(a, 5);
    //ex132(a, 4);
    //ex133(a, 7);
    //ex134(a, 7);
    //ex135(a, 7);
    //ex136(a, 7);
    //ex137(a, 7);
    //ex138(a, 7);
    //ex139(a, 11);
    //ex140(a, 10);
    //ex141(a, 10);
    //ex142(a, 10);
    //ex143(a, 11);
    //ex144(a, 11);
    //ex145(a, 11);
    //ex146(a, 11);
    //ex147(a, 11);
    //ex148(a, 11);
    //ex149(a, 10);
    //ex150(a, 12);
    //ex151(a, 12);
    //ex152(a, 12);
    //ex153(a, 12);
    //ex154(a, 12);
    //ex155(a, 9);
    //ex157(a, 12);
    //ex158(a, 12);
    //ex159(a, 12);
    //ex160(a, 12);
    //ex161(a, 12);
    //ex162(a, 12);
    //ex163(a, 13);
    //ex165(a, 13);
    //ex166(a, 13);
    //ex167(a, 13);
    //ex168(a, 13);
    //ex169(a, 13);
    //ex170(a, 13);  
    return 0;
}