#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isAllOddNumber(int n){
    while(n !=0){
        int k = n % 10;
        if(k%2==0){
            return false;
        }
        n/=10;
    }
    return true;
}

bool isPerfectNumber(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }
    return sum == n;
}

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

void ex156(int a[], int n){
    int space = INT_MAX;
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

// bool isOddNumber(int n){
//     while(n>0){
//         int k = n%10;
//         if(k%2==0){
//             return false;
//         }
//         n/=10;
//     }
//     return true;
// }

int ex167(int a[], int n){
    bool check = false;
    int max = INT_MIN;
    for(int i=0; i<n;i++){
        if(isAllOddNumber(a[i]) && a[i]>max){
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

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a*b)/gcd(a,b);
}

void ex171and172(int a[], int n){
    int gcd_result = a[0];
    int lcm_result = a[0];
    for (int i = 1; i < n; i++) {
        gcd_result = gcd(gcd_result, a[i]);
        lcm_result = lcm(lcm_result, a[i]);
    }
    cout << "GCD = " << gcd_result << endl;
    cout << "LCM = " << lcm_result << endl;
}

void ex173(int a[], int n){
    int digit[10] = {0};
    for(int i = 0; i < n; i++){
        int tmp = a[i];
        while(tmp){
            digit[tmp%10]++;
            tmp/=10;
        }
    }
    int index = 0;
    int min = digit[0];
    for(int i=0;i<n;i++){
        if(min > digit[i]){
            min = digit[i];
            index  = i;
        }
    }
    cout << index << endl;
} 

void ex174(int a[], int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(a[i]<=a[j]){
                cout << a[i] << " " << a[j] << endl;
            }
        }
    }
}

void ex175(int a[], int n){
    int space = INT_MAX;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int space2 = abs(a[i] - a[j]);
            if(space2 < space){
                space = space2;
            }
        }
    }
    cout << space << endl;
}

void ex176(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i]<0){
            cout << a[i] << " ";
        }
    }
}

void ex177(int a[], int n, int x, int y){
    cin >> x >> y;
     for(int i = 0; i<n; i++){
        if(a[i]>=x&&a[i]<=y){
            cout << a[i] << endl;
        }
     }
}

void ex178(int a[], int n, int x, int y){
    cin >> x >> y;
     for(int i = 0; i<n; i++){
        if(a[i]>=x&&a[i]<=y&&a[i]%2==0){
            cout << a[i] << endl;
        }
     }
}

void ex179(int a[], int n){
    for(int i=0; i<n-1; i++){
        if(a[i]> abs(a[i+1])){
            cout << a[i] << " ";
        }
    }
}

void ex180(int a[], int n){
    for(int i=1; i<n-1; i++){
        if(a[i]< abs(a[i+1]) && a[i] > a[i-1]){
            cout << a[i] << " ";
        }
    }
}

void ex181(int a[], int n){
    for(int i=1;i<n -1;i++){
        if(!(a[i] % 2)) {
            if(!(a[i + 1] % 2) || !(a[i - 1] % 2)) {
                cout << a[i] << " ";
            }
        }
    }
}

void ex182(int a[], int n){
    for(int i=1;i<n -1;i++){
        if(a[i]*a[i+1] < 0|| a[i]*a[i-1] <0){
            cout << a[i] << endl;
        }
    }
}

void ex183(int a[], int n){
    int max = a[0];
    for(int i=1;i<n;i++){
        if(max < a[i]){
            max = a[i];
        }
    }
    for(int i=0; i<n;i++){
        if(max==a[i]){
            cout << i << " ";
        }
    }
}

void ex184(int a[], int n){
    for(int i=0; i<n; i++){
        if(isCheckPrime(i)==a[i]){
            cout << a[i] << " ";
        }
    }
}
 
void ex185(int a[], int n){
    for(int i=0; i<n;i++){
        if((int)sqrt(a[i])==sqrt(a[i])){
            cout << a[i] << " ";
        }
    }
}

void ex186(int a[], int n){
    for(int i=0; i<n;i++){
        if(a[i]<0){
            cout << i << endl;
            break;
        }
    }
}

void ex187(int a[], int n){
    int min = INT_MAX;
    int pos = 0;
    for(int i=0; i<n;i++){
        if(a[i]>0){
            if(a[i] < min){
                min = a[i];
                pos = i;
            }
        }
    }
    cout << pos << endl;
}

void ex188(int a[], int n){
    int max = INT_MIN;
    int pos = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            if(a[i] > max){
                max = a[i];
                pos = i;
            }
        }
    }
    cout << pos << endl;
}

bool isOddNumber(int n){
    while(n / 10){
        n/=10;
    }
    return (n%2 != 0);
}

void ex189(int a[], int n){
    for(int i=0; i<n; i++){
        if(isOddNumber(a[i]) && isCheckPrime(a[i])){
            cout << a[i] << endl;
        }
    }
}

void ex190(int a[],int n){
    for(int i=0; i<n; i++){
        if(isAllOddNumber(a[i])){
            cout << a[i] << " ";
        }
    }
}

void ex191(int a[], int n){
    //int max = INT_MIN;
    for(int i=0; i<n;i++){
        if(a[i]>a[i+1]&&(a[i]>a[i-1])){
            cout << a[i] << " ";
        }
    }
}

bool isEvenNumber(int n){
    while(n/10){
        n/=10;
    }
    return (n%2 == 0);
}

void ex192(int a[], int n){
    for(int i=0; i<n;i++){
        if(isEvenNumber(a[i])){
            cout << a[i] << " ";
        }
    }
}


int isPowerOfThree(int n) {
    double k = log(n) / log(3);
    return (int)k == k;
}

void ex193(int a[], int n) {
    bool check = false;
    for (int i = 0; i < n; i++) {
        if (isPowerOfThree(a[i])) {
            cout << a[i] << " ";
            check = true;
        }
    }
    if (!check) {
        cout << 0;
    }
}


void ex194(int a[], int n){
    int space = INT_MAX;
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            int space2 = abs(a[i]-a[j]);
            if(space2 < space){
                space2 = space;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            int space2 = abs(a[i]-a[j]);
            if(space2 == space){
                cout << a[i] << a[j] << " ";
            }
        }
    }
}

void ex195(int a[], int n){
    for(int i=0; i<n-2;i++){
        for(int j=i+1; j<n-1; j++){
            for(int k=0; k<n; k++){
                if(a[i]==a[j]+a[k]){
                    cout << a[i] << a[j] << a[k] << " ";
                }
            }
        }
    }
}

void ex196(int a[], int n){
    for(int i=0;i<n;i++){
        if(a[i]<0){
            cout << a[i] << " ";
        }
    }
}

void ex197(int a[], int n){
    for(int i=0; i<n;i++){
        if(isOddNumber(a[i])){
            cout << a[i] << " ";
        }
    }
}

void ex198(int a[], int n){
    int max= a[0];
    int pos = 0;
    for(int i=0;i<n;i++){
        if(max>a[i]){
            max=a[i];
            pos = i;
        }
    }
    cout << pos << " ";
}

void ex199(int a[], int n){
    for(int i=0;i<n;i++){
        if(isCheckPrime(a[i])){
            cout << a[i] << " ";
        }
    }
}

void ex200(int a[], int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout << sum << " ";
}

void ex201(int a[], int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            sum+=a[i];
        }
    }
    cout << sum << " ";
}

void ex202(int a[], int n){
    double sum = 0;
    for(int i=0;i<n;i++){
        if(isOddNumber(a[i])){
            sum+=a[i];
        }
    }
    cout << sum << " ";
}

void ex203(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int k = (a[i]/10)%10;
        if(k==5){
            sum+=a[i];
        }
    }
    cout << sum << endl;
}

void ex204(int a[], int n){
    int sum = 0;
    for(int i = 1; i < n; i++) {
       if(a[i]>a[i-1]){
            sum+=a[i];
       }
    }
    cout << sum << endl;
}

void ex205(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i]> abs(a[i+1])){
            sum+=a[i];
        }
    }
    cout << sum << endl;
}

void ex206(int a[], int n){
    int sum = 0;
    for(int i = 1; i < n-1; i++) {
       if(a[i]>a[i-1] && a[i] > a[i+1]){
            sum+=a[i];
       }
    }
    cout << sum << endl;
}

void ex207(int a[], int n){
    int sum = 0;
    for(int i = 1; i < n-1; i++) {
       if(a[i] != a[i-1] && a[i] != a[i+1]){
            sum+=a[i];
       }
    }
    cout << sum << endl;
}

void ex208(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(sqrt(a[i])==(int)sqrt(a[i])){
            sum+=a[i];
        }
    }
    cout << sum << endl;
}

void ex209(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int k = a[i];
        int s = 0;
        while(k){
            s=s*10+k%10;
            k/=10;
        }
        if(s==a[i]){
            sum+=a[i];
        }
    }
    cout << sum << endl;
}

void ex210(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(isEvenNumber(a[i])){
            sum +=a[i];
        }
    }
    cout << sum << endl;
}

void ex211(int a[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(isCheckPrime(a[i])){
            sum+=a[i];
            count++;
        }
    }
    cout <<(float) sum/count << endl;
}

void ex212(int a[], int n){
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]>0){
            sum+=a[i];
            count++;
        }
    }
    cout << (float)sum/count << endl;
}

void ex213(int a[], int n){
    int x; cin >> x;
    int sum = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]>x){
            sum+=a[i];
            count++;
        }
    }
    cout << (float)sum/count << endl;
}

void ex214(int a[], int n){
    long long p = 0;
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]>0){
            p*=a[i];
            count++;
        }
    }
    cout << pow(p, 1.0/count) << endl;
}

void ex215(int a[], int n){
    int sum = 0;
    for(int i = 0; i < n-1; i++) {
        int space2 = abs(a[i]-a[i+1]);
        sum+=space2;
    }
    cout <<(double)sum/(n-1) << endl;
}

void ex216(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0){
            count++;
        }
    }
    cout << count << endl;
}

void ex217(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]>0 && a[i]%7==0){
            count++;
        }
    }
    cout << count << endl;
}

void ex218(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        int k = a[i];
        int s = 0;
        while(k){
            s=s*10+k%10;
            k/=10;
        }
        if(s==a[i])
        count++;
    }
    cout << count << endl;
}

void ex219(int a[], int n){
    int count = 0;
    int x; cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i]==x){
            count++;
        }
    }
    cout << count << endl;
}

void ex220(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]%10==5){
            count++;
        }
    }
    cout << count << endl;
}

void ex221(int a[], int n){
    int count1=0;//le
    int count2=0;//chan
    for(int i = 0; i < n; i++) {
        if(a[i]%2!=0){
            count1++;
        }else{
            count2++;
        } 
    }
    if(count1>count2){
        cout << "1";
    }else if(count2>count1){
        cout <<"-1";
    }else{
        cout << "0";
    }
}

void ex222(int a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++) {
        if((a[i]>a[i+1] && a[i]>a[i-1])||(a[i]<a[i+1] && a[i]<a[i-1])){
            count++;
        }
    }
    cout << count << endl;
}


void ex223(int a[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(isCheckPrime(a[i])){
            count++;
        }
    }
    cout << count << endl;
}

void ex224(int a[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(isPerfectNumber(a[i])) ++count;
    }
    cout << count << endl;
}

void ex225(int a[], int n){
    int count = 0;
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i]>max){
            max=a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(a[i]==max){
            count++;
        }
    }
    cout << count << endl;
}

void ex225c2(int a[], int n){
    int count = 0;
    int maxValue = a[0];
    for(int i = 0; i < n; i++) {
        if(a[i] > maxValue) {
            maxValue = a[i];
            count = 0;
        }
        if(a[i] == maxValue) ++count;
    }
    cout << count << endl;
}

void ex226(int a[], int n){
    int count = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i]%2==0 && a[i+1]%2==0){
            count++;
        }
    }
    cout << count << endl;
}

void ex227(int a[], int n){
    int count = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i] * a[i+1]<0){
            count++;
        }
    }
    cout << count << endl;
}

void ex228(int a[], int n){
    int count = 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i]*a[i+1]>0 && abs(a[i]<abs(a[i+1]))){
            count++;
        }
    }
    cout << count << endl;
}

void ex230(int a[], int n){
    map<int, int> cc;
    for(int i=0; i<n; i++){
        cc[a[i]]++;
    }
    for(auto x : cc){
        //cout << x.first << endl;
        cout << x.second << endl;
    }
}

void ex231(int a[], int n){
    map<int, int> cc;
    for(int i=0; i<n; i++){
        cc[a[i]]++;
    }
    for(auto x : cc){
        //cout << x.first << endl;
        if(x.second==1){
            cout << x.first << endl;
        }
    }
}


void ex232(int b[], int n){
    map<int, int> cc;
    for(int i = 0; i < n; i++) {
        cc[b[i]]++;
    }
    for(auto x: cc){
        if(x.second>1){
            cout << x.first << endl;
        }
    }
}

void ex233(int b[], int n){
    map<int, int> cc;
    for(int i=0; i<n; i++){
        cc[b[i]]++;
    }
    for(auto x : cc){
        cout <<"Value: " << x.first << endl;
        cout <<"Appear: " << x.second << endl;
    }
}



void ex238(int b[], int n){
    map<int, int> cc;
    for (int i = 0; i < n; i++){
        cc[b[i]]++;
    }
    int max = 0, res;
    for (auto it : cc){
        if (max < it.second){
            max = it.second;
            res = it.first;
        }
    }
    cout << res << endl;
    cout << max << endl;
}


void ex239(int a[], int n){
    map<int, int> cc;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(isCheckPrime(a[i])){
            if(cc.find(a[i]) == cc.end()){
                cc[a[i]] = 1;
            }else{
                cc[a[i]]++;
            }
        }
    }
    for(auto x : cc) {
        if(x.second == 1){
            count++;
        }
    }  
    cout << count;
}

void ex240(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i] == 0) {
            cout << "1" << endl;
            return;
        }
    }
    cout << "0" << endl;
}

void ex241(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]==0 && a[i+1]==0){
            cout << "1" << endl;
            return;
        }
    }
    cout << "0" << endl;
}

void ex242(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0){
            cout << "1" << endl;
            return;
        }
    }
    cout << "0" <<endl;
}

void ex243(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(isCheckPrime(a[i])){
            cout << "1" <<endl;
            return;
        }
    }
    cout << "0" << endl;
}

void ex244(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(isPerfectNumber(a[i])&& a[i]>256){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

void ex245(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]%2!=0){
            cout << "0" <<endl;
            return;
        }
    }
    cout << "1" << endl;
}
void ex246(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]!=a[n-i-1]){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" <<endl;
}

void ex247(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if((a[i]+a[i+1])%2==0){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" <<endl;
}

void ex248(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]>=a[i+1]){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" <<endl;
}

void ex249(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]<=a[i+1]){
            cout << "0" <<endl;
            return;
        }
    }
    cout << "1" <<endl;
}

void ex250(int a[], int n){
    int d = a[1] - a[0];
    for(int i = 0; i < n-1; i++) {
        if((a[i+1]-a[i])!=d){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

void ex251(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]!=a[i+1]){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

void ex252(int a[], int n){
    for(int i = 1; i < n-1; i++) {
        if(a[i]==a[i+1] && a[i]==a[i-1]){
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}

void ex253(int a[], int b[], int n, int m){
    map<int, int> bm;
    for(int i = 0; i < m; i++) {
        bm[b[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(bm[a[i]] == 0) {
            cout << "0" << endl;
            return;
        }
    }
    cout << "1" << endl;
}
//a[1, 4, 7, 8, 9]
//b[1, 5, 7, 10, 4, 15, 9]

void ex254(int a[], int n){
    int count = 0;
    int max = a[0];
    for(int i = 1; i < n ; i++) {
        if(a[i] > max) {
            ++count;
            max = a[i];
        }
    }
    cout << count << endl;
}

void ex255(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex256(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        for(int j=i+1; j<n; j++){
            if(a[i]<a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex257(int a[], int n){
    for(int i=1; i<n-1; i+=2){
        for(int j=i+2; j<n; j+=2){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}


void ex258(int a[], int n){
    for(int i = 0; i < n - 1; i++){
        if(isCheckPrime(a[i])){
            for(int j = i + 1; j < n; j++){
                if(isCheckPrime(a[j])){
                    if(a[i]>a[j]){
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }
}

void ex259(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(isPerfectNumber(a[i])){
            for(int j=i+1; j<n; j++){
                if(isPerfectNumber(a[j])){
                    if(a[i]<a[j]){
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }
}

void ex261(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]>0){
            for(int j=i+1; j<n; j++){
                if(a[j]>0){
                    if(a[i]>a[j]){
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }
}

void ex263(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        if(a[i]>0){
            for(int j=i+1; j<n; j++){
                if(a[j]>0){
                    if(a[i]>a[j]){
                        swap(a[i], a[j]);
                    }
                }
            }
        }else{
            for(int j=i+1;j<n;j++){
                if(a[j]<0){
                    if(a[i]<a[j]){
                        swap(a[i], a[j]);
                    }
                }
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex264(int a[], int b[], int n, int m){
    int mix[n + m];
    int indexArray = 0;
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(a[i] < b[j]) {
            mix[indexArray++] = a[i++];
        }
        else {
            mix[indexArray++] = b[j++];
        }
    }
    if(i == n) {
        while(j < m) {
            mix[indexArray++] = b[j++];
        }
    }
    else if(j == m) {
        while(i < n) {
            mix[indexArray++] = a[i++];
        }
    }
    for(int i = 0; i < indexArray; i++) {
        cout << mix[i] << " ";
    }
}

void ex265(int a[], int b[], int n, int m){
    int mix[n + m];
    int indexArray = 0;
    int i = n - 1, j = m - 1;
    while(i >= 0 && j >= 0) {
        if(a[i] > b[j]) {
            //cout << a[i] << endl;
            mix[indexArray++] = a[i--];
        }
        else {
            //cout << b[j] << endl;
            mix[indexArray++] = b[j--];
        }
    }
    // cout << i << "-" << j << endl;
    for(int i = 0; i < indexArray; i++) {
        cout << mix[i] << " ";
    }
    if(i == 0) {
        while(j >= 0) {
            mix[indexArray++] = b[j--];
        }
    }
    else if(j == 0) {
        while(i >= 0) {
            mix[indexArray++] = a[i--];
        }
    }
}

void ex266(int a[], int n){
    int x; cin >> x;
    int k; cin >> k;
    //0 1  2  3 4 a[]
    //7 13 15 9 2  x
    for(int i = n; i > k ; i--) {
        a[i] = a[i-1];
    }
    a[k] = x;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    n++;
}

void ex267(int a[], int n){

}

void input(int a[], int n){
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}


void ex269(int a[], int n){
    int x; cin >> x;
    int i = n;
    while(x <= a[i - 1]){
        a[i] = a[i - 1];
        i--;
    }
    a[i] = x;
    n++;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}



void ex270(int a[], int n){
    for(int i = 0; i < n-1; i++) {
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i], a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex271(int a[], int n){
    int k; cin >> k;
    for(int i = k; i < n - 1 ; i++) {
        a[i]=a[i+1];
    }
    n--;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex272(int a[], int n){
    int max = *max_element(a, a + n);
    for(int i = 0; i < n; i++) {
        if(max == a[i]) {
            for(int j = i; j < n - 1 ; j++) {
                a[j]=a[j+1];
            }
            n--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex273(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]<0){
            for(int j = i; j < n-1 ; j++) {
                a[j]=a[j+1];   
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex274(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0){
            for(int j = i; j < n-1 ; j++) {
                a[j]=a[j+1];   
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex275(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(sqrt(a[i])==(int)sqrt(a[i])){
            for(int j = i; j < n - 1; j++){
                a[j] = a[j+1];
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex276(int a[], int n){
    int x; cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i]==x){
            for(int j = i; j < n-1 ; j++) {
                a[j]=a[j+1];   
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex277(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(isCheckPrime(a[i])){
            for(int j = i; j < n-1 ; j++) {
                a[j]=a[j+1];   
            }
            n--;
            i--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex278(int a[], int n){
    sort(a, a + n);
    
    for(int i = 0; i < n-1; i++) {
        int temp = a[i+1];
        if(a[i]==temp){
            for(int j = i; j < n-1 ; j++) {
                a[j]=a[j+1];   
            }
            n--;
            i--;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void output(int a[], int n){
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex279(int a[], int n){
    sort(a, a+n);
    // for(int i = 0; i < n - 1; i++) {
    //     if(a[i+1]==a[i]){
    //         int temp = a[i];
    //         while(a[i]==temp){
    //             for(int j = i; j < n-1; j++) {
    //                 a[j]=a[j+1];                    
    //             }
    //             n--;
    //         }
    //         --i;
    //     }
    // }
    //cout << "dat khung";
    for (int i = 0; i < n - 1; i++) {
        if(a[i + 1] == a[i]) {
            int temp = a[i];
            while(a[i] == temp) {
                for(int j = i; j < n - 1; j++) {
                    a[j] = a[j + 1];
                }
                n--;
            }
            --i;
        }
    }
    output(a, n);
}

void ex280(int a[], int n){
    int x; cin >> x;
    for(int i = 0; i < n; i++) {
        if(a[i]==x){
            swap(a[i], a[0]);
        }
    }
    output(a, n);
}

void ex281(int a[], int n){
    int left = 0;
    int right = n - 1;
    int mid = (left + right) / 2;
    while(left <= right){
        while(!(a[left]%2)){
            if(a[left]==0){
                swap(a[left], a[mid]);
                left--;
            }
            left++;
        }
        while(a[right]%2){
            if(a[right]==0){
                swap(a[right], a[mid]);
                right++;
            }
            right--;
        }
        if(left <= right){
            swap(a[left], a[right]);
        }
        left++;
        right--;
    }
    output(a, n);
}

void ex282(int a[], int n){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        if(a[left] % 3) {
            while(a[right]%3){
                right--;
            }
            if(left <= right){
                swap(a[left], a[right]);
            }
        }
        else {
            ++right;
        }
        left++;
        right--;
    }
    output(a, n);
}

void ex283(int a[], int n){
    for(int i = 0; i < n / 2; i++) {
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex284(int a[], int n){
    int left = 0;
    int right = n - 1;
    while(left<=right){
        while(a[left]%2){
            left++;
        }
        while(a[right]%2){
            right--;
        }
        if(left < right){
            swap(a[left], a[right]);
        }
        left++;
        right--;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex285(int a[], int n){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        while(a[left]<=0){
            left++;
        }
        while(a[right]<=0){
            right--;
        }
        if(left < right){
            swap(a[left],a[right]);
        }
        left++;
        right--;
    }
}
void ex286(int a[], int n){
    int tmp = a[0];
    for(int i = 0; i < n; i++) {
        a[i]=a[i+1];
    }
    a[n-1]=tmp;
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
} 

void ex287(int a[], int n){
    int k;
    while(k){
        int temp = a[n-1];
        for(int i = n-1; i > 0; i--) {
            a[i]=a[i-1];
        } 
        a[0] = temp; 
    }
    output(a, n);
}

void ex288(int a[], int n){
    for(int i = 0; i < n; i++) {
        if(a[i]%2==0){
            cout << "Yellow" << endl;
        }else{
            cout << "White" << endl;
        }
    }
    output(a, n);
}


void ex289(int a[], int n){
    string odd = "";
    string even = "";
    for(int i=0; i<n; i++){
        if(a[i]%2){
            odd += " " + to_string(a[i]);
        }else{
            even += " " + to_string(a[i]);
        }
    }
    cout << odd << endl;
    cout << even << endl;
}

void ex290(int a[], int n){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        while(a[left]%2){
            left++;
        }
        while(a[right]%2){
            right--;
        }
        if(left<right){
            swap(a[left], a[right]);
        }
        right--;
        left++;
    }
}

void ex291(int a[], int n){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(max==a[i]){
            a[i]=min;
        }
        if(min==a[i]){
            a[i]=max;
        }
    }
    output(a, n);
}

void ex292(int a[], int n){
    for(int i = 0; i < n; i++) {
        a[i]=round(a[i]);
    }
    output(a, n);
}

void ex307(int a[], int b[], int n){
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]%2!=0){
            b[index++] = a[i];
        }
    }
    for(int i = 0; i < index; i++) {
        cout << b[i] << " ";
    }
}

void ex308(int a[], int b[], int n){
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(a[i]<0){
            b[index] = a[i];
            index++;
        }
    }
    for(int i = 0; i < index; i++) {
        cout << b[i] << " ";
    }
}


void ex309(int a[], int b[], int n){
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(i==0){
            b[index]=a[i+1];
            index++;
        }else if(i==n-1){
            b[index]=a[i-1];
            index++;
        }else{
            b[index]=a[i-1]+a[i+1];
            index++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}

void ex310(int a[], int b[], int n){
    int index = 0;
    for(int i = 0; i < n; i++) {
        if(isCheckPrime(a[i])){
            b[index] = a[i];
            index++;
        }
    }
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
}

void ex311(int a[][1000], int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            cin >> a[i][j];  
        }
    }
}

void ex312(double a[][1000], int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            cin >> a[i][j];  
        }
    }
}

void ex313(int a[][1000], int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            cout << a[i][j] << " ";  
        }
        cout << endl;
    }
}

void ex314(double a[][1000], int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            cout << a[i][j] << " ";  
        }
        cout << endl;
    }
}

void ex315(double a[][1000], int n, int m){
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
    cout << max << endl;
}

void ex316(int a[][1000], int n, int m){
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; i++) {
            if(a[i][j]%2==0&& a[i][j]<2004){
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}
struct MixedNumber{
    int integerNumber;
    int numerator;
    int denominator;

    MixedNumber(int a, int b, int c){
        integerNumber = a;
        numerator = b;
        denominator = c;
    }
};

void ex476input(MixedNumber &m){
    cout << "Enter integer number: " << endl;
    cin >> m.integerNumber;
    cout << "Enter numerator: ";
    cin >> m.numerator;
    cout << "Enter denomitor: ";
    cin >> m.denominator;
}

void ex467output(MixedNumber &m){
    cout << m.integerNumber << "*(" << m.numerator << "/" << m.denominator << ")";
}

struct Fraction{
    int numerator;
    int denominator;

    Fraction(int num, int deno) {
        numerator = num;
        denominator = deno;
    }
};

void ex475input(Fraction &f){
    cout << "Enter numerator: ";
    cin >> f.numerator;
    cout << "Enter denominator: ";
    cin >> f.denominator;
}

void ex475output(Fraction f){
    cout << f.numerator << "/" << f.denominator << endl;
}

struct Coordinate{
    double x, y;
    string nameOfPoint;
};

void ex477input(Coordinate &co){
    cout << "Enter waypoint x: " << endl;
    cin >> co.x;
    cout << "Enter waypoint y: " << endl;
    cin >> co.y;
    cout << "Enter name of point: " << endl;
    cin.ignore();
    getline(cin, co.nameOfPoint);
}

void ex477output(Coordinate co){
    cout << co.nameOfPoint << "(" << co.x << "," << co.y << ")";
}

struct Coordinatexyz{
    double x, y, z;
    string nameOfPoint;
};

void ex478input(Coordinatexyz &co){
    cout << "Enter waypoint x: " << endl;
    cin >> co.x;
    cout << "Enter waypoint y: " << endl;
    cin >> co.y;
    cout << "Enter waypoint z: " << endl;
    cin >> co.z;
    cout << "Enter name of point: " << endl;
    cin.ignore();
    getline(cin, co.nameOfPoint);
}

void ex478output(Coordinatexyz co){
    cout << co.nameOfPoint << "(" << co.x << "," << co.y << "," << co.z << ")";
}

struct Monomial{
    double coefficient;
    char variable;
    double power;
};

void ex479input(Monomial &mo){
    cout << "Enter coefficient: " << endl;
    cin >> mo.coefficient;
    cout << "Enter variable: " << endl;
    cin >> mo.variable;
    cout << "Enter power: " << endl;
    cin >> mo.power;
}

void ex479output(Monomial mo){
    cout << "P(x) = " << mo.coefficient << "*(" << mo.variable << "^" << mo.power << ")";
}

struct Polynomial {
    char variable;
    int size = 0;
    vector<int> coeff;
    void input(){
        cout << "Enter variable: " << endl;
        cin >> variable;
        while(1){
            cout << "Enter coeffienct: " << endl;
            int value;
            cin >> value;
            coeff.push_back(value);
            cout << "Continue(y/n): ";
            char ans;
            cin >> ans;
            ++size;
            if(ans == 'n'){
                break;
            }
        }
    }
    void output(){
        int i = size - 1;
        for(i; i > 1; i--) {
            printf("%d%c^%d + ", coeff[i], variable, i);
        }
        printf("%d%c + ", coeff[i--], variable);
        printf("%d", coeff[i]);
    }
};

void ex480(){
    Polynomial po;
    po.input();
    po.output();
}

void ex485() {
    Coordinate co1;
    Coordinate co2;
    Coordinate co3;

    ex477input(co1);
    ex477input(co2);
    ex477input(co3);

    double AB = sqrt(pow(co1.x - co2.x, 2) + pow(co1.y - co2.y, 2));
    double BC = sqrt(pow(co3.x - co2.x, 2) + pow(co3.y - co2.y, 2));
    double AC = sqrt(pow(co3.x - co1.x, 2) + pow(co3.y - co1.y, 2));


    cout << "Perimeter:  " << AB + BC + AC << endl;
    cout << "Area: " << 0.5 * ((co2.x - co1.x)*(co3.y - co1.y) - (co3.x - co1.x)*(co2.y - co1.y)) << endl;
    cout << "Barycentric coordinate G is: "
         << "G(" << (co1.x + co2.x + co3.x) / 3 << "," << (co1.y + co2.y + co3.y) / 3 << ")";
    //printf("Barycentric coordinate G is: G(%f, %f)", (co1.x + co2.x + co3.x) / 3,(co1.y + co2.y + co3.y) / 3);
    //S.ABC  = 1/2[(xB-xA)(yC-yA)-(xC-xA)(yB-yA)]
}

//489
int main() {
    //ex480();
    // Monomial mo;
    // ex479input(mo);
    // ex479output(mo);
    // Coordinatexyz co;
    // cout << "Coordinate needed to enter: " << endl;
    // ex478input(co);
    // ex478output(co);

    // Fraction fr(1, 2);
    // cout << "Fraction need to enter: "<< endl;
    // ex475input(fr);
    // cout << "The fraction is: " << endl;
    // ex475output(fr);

    // MixedNumber m(2, 1, 3);
    // cout << "The mixed number we need to enter: " << endl;
    // ex476input(m);
    // cout << "The mixed number is: " << endl;
    // ex467output(m);

    // Coordinate co;
    // cout << "Coordinate needed to enter: " << endl;
    // ex477input(co);
    // cout << "The coordinate we entered is: " << endl;
    // ex477output(co);

    // int a[] = {-8,-1,-2, 8128, 10, 1, 2, 3, 4, 5, 15, 6, 9};
    // int b[] = {12, 43, 12, 34, 43, 12, 5};
    // int c[] = {1, 5, 13, 9, 13, 9, 13};
    // int d[] = {1, 3, 5, 7, 9, 6, 13};
    // int e[] = {2, 4, 6, 8, 10, 25};
    // int f[] = {14, 7, -1, -8, 2};
    //ex284(e, 6);
    //ex283(b, 7);
    //ex282(d, 7);
    //ex281(b, 7);
    //ex280(e, 6);
    //ex279(c, 7);
    //ex278(c, 7);
    //ex277(d, 7);
    //ex276(c, 5);
    //ex275(e, 6);
    //ex274(e, 6);
    //ex273(f, 5);
    //ex272(c, 5);
    //ex271(c, 5);
    //input(a, 7);
    //ex270(f, 5);
    //ex269(c, 5);
    //ex266(c, 6);
    //ex266(c, 5);
    //ex265(d, e, 7, 5);
    //ex254(c, 5);
    //int a[] = {1, -3, 0, 3, 5, 7, 10, 7, 9, 2, 2};
    //ex286(a, 13);
    //ex239(a, 11);
    //ex238(b, 7);
    //ex233(b, 7);
    //ex232(b, 7);
    //ex223(a, 13);
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