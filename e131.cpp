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
};

void ex476input(MixedNumber &m){
    cout << "Enter integer number: " << endl;
    cin >> m.integerNumber;
    cout << "Enter numerator: ";
    cin >> m.numerator;
    cout << "Enter denomitor: ";
    cin >> m.denominator;
}

void ex476output(MixedNumber &m){
    cout << m.integerNumber << "*(" << m.numerator << "/" << m.denominator << ")";
}

struct Fraction{
    int numerator;
    int denominator;
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

void ex506output(Fraction f){
    int k = gcd(f.numerator, f.denominator);
    cout << f.numerator / k << "/" << f.denominator / k << endl;
}


void ex507output(Fraction f1, Fraction f2){
    Fraction result;
    ex475input(f1);
    ex475input(f2);
    result.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    ex506output(result);
}

void ex508output(Fraction f1, Fraction f2){
    Fraction result;
    ex475input(f1);
    ex475input(f2);
    result.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    ex506output(result);
}

void ex509(Fraction f1, Fraction f2){
    Fraction result;
    ex475input(f1);
    ex475input(f2);
    result.numerator = f1.numerator *  f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    ex506output(result);
}

void ex510(Fraction f1, Fraction f2){
    Fraction result;
    ex475input(f1);
    ex475input(f2);
    result.numerator = f1.numerator* f2.denominator;
    result.denominator = f1.denominator * f2.numerator;
    ex506output(result);
}

void ex512(Fraction f1, Fraction f2){
    ex475input(f1);
    ex475input(f2);
    
    cout << "(" << f1.numerator << "*" << f2.denominator << "+" << f1.denominator << "*" << f2.numerator << ")/(" << f1.denominator << "*" << f2.denominator <<")";
}

void ex513_4(Fraction f1){
    if(f1.numerator * f1.denominator > 0){
        cout << "This is positive fraction";
    }else if(f1.numerator * f1.denominator < 0){
        cout << "This is negative fraction";
    }
}

void ex515(Fraction f1, Fraction f2){
    if (f1.numerator*f2.denominator-f2.numerator*f1.denominator >= 0)
        cout << "f1 > f2";
    else
        cout << "f2 > f1";
}

// Fraction operator * (const Fraction f1, const Fraction f2) {
//     Fraction result;
//     result.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
//     result.denominator = f1.denominator * f2.denominator;
// }

// Fraction operator * (const Fraction f1, Fraction f2){
//     Fraction result;
//     result.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
//     result.denominator = f1.denominator * f2.denominator;
// }

// Fraction operator * (const Fraction f1, Fraction f2){
//     result.numerator = f1.numerator *  f2.numerator;
//     result.denominator = f1.denominator * f2.denominator;
// }

// Fraction operator * (const Fraction f1, Fraction f2){
//     result.numerator = f1.numerator *  f2.denominator;
//     result.denominator = f1.denominator * f2.numerator;
// }  

struct MixNumber{
    int whole;
    int numerator;
    int denominator;
};

void ex523(MixNumber &m){
    cout << "Enter whole: " << endl;
    cin >> m.whole;
    cout << "Enter numerator: ";
    cin >> m.numerator;
    cout << "Enter denomitor: ";
    cin >> m.denominator;
}

void ex524(MixNumber &m){
    cout << m.whole << "*(" << m.numerator << "/" << m.denominator << ")";
}

void ex525output(MixNumber m){
    int tempNumerator = m.whole * m.denominator + m.numerator;
    int tempDenominator = m.denominator;
    int k = gcd(tempNumerator, tempDenominator );
    cout << tempNumerator/ k << "/" << tempDenominator / k << endl;
}

void ex526output(MixNumber m1, MixNumber m2){
    MixNumber result;
    Fraction f1, f2, f;
    f1.numerator = m1.whole * m1.denominator + m1.numerator;
    f1.denominator = m1.denominator;
    f2.numerator = m2.whole * m2.denominator + m2.numerator;
    f2.denominator = m2.denominator;
    f.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    result.whole = (int)f.numerator / f.denominator;
    result.numerator = f.numerator % f.denominator;
    result.denominator = f.denominator;
    ex524(result);
}

void ex527output(MixNumber m1, MixNumber m2){
    MixNumber result;
    Fraction f1, f2, f;
    f1.numerator = m1.whole * m1.denominator + m1.numerator;
    f1.denominator = m1.denominator;
    f2.numerator = m2.whole * m2.denominator + m2.numerator;
    f2.denominator = m2.denominator;
    f.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    result.whole = (int)f.numerator / f.denominator;
    result.numerator = f.numerator % f.denominator;
    result.denominator = f.denominator;
    ex524(result);
}

void ex528output(MixNumber m1, MixNumber m2){
    MixNumber result;
    Fraction f1, f2, f;
    f1.numerator = m1.whole * m1.denominator + m1.numerator;
    f1.denominator = m1.denominator;
    f2.numerator = m2.whole * m2.denominator + m2.numerator;
    f2.denominator = m2.denominator;
    f.numerator = f1.numerator *  f2.numerator;
    f.denominator = f1.denominator * f2.denominator;
    result.whole = (int)f.numerator / f.denominator;
    result.numerator = f.numerator % f.denominator;
    result.denominator = f.denominator;
    ex524(result);
}

void ex529output(MixNumber m1, MixNumber m2){
    MixNumber result;
    Fraction f1, f2, f;
    f1.numerator = m1.whole * m1.denominator + m1.numerator;
    f1.denominator = m1.denominator;
    f2.numerator = m2.whole * m2.denominator + m2.numerator;
    f2.denominator = m2.denominator;
    f.numerator = f1.numerator *  f2.denominator;
    f.denominator = f1.denominator * f2.numerator;
    result.whole = (int)f.numerator / f.denominator;
    result.numerator = f.numerator % f.denominator;
    result.denominator = f.denominator;
    ex524(result);
}

void ex511(Fraction f){
    int k = gcd(f.numerator, f.denominator);
    if (k==1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

void ex530output(MixNumber m){
    int tempNumerator = m.whole * m.denominator + m.numerator;
    int tempDenominator = m.denominator;
    int k = gcd(tempNumerator, tempDenominator );
    if(k==1){
        cout << "YES";
    }else{
        cout << "NO";
    }
}

// z = a + bi
// i^2 = -1;
struct ComplexNumber{
    int a, b;
    ComplexNumber operator + (const ComplexNumber other){
        ComplexNumber total;
        total.a = a + other.a;
        total.b = b + other.b;
        return total;
    }
};

void ex533(ComplexNumber c){
    cin >> c.a;
    cin >> c.b;
}

void ex534(ComplexNumber c){
    cout << c.a << "+" << c.b << "i";
}

void ex535(ComplexNumber c1, ComplexNumber c2){
    ComplexNumber total;
    total.a = c1.a + c2.b;
    total.b = c1.b + c2.b;
    cout << total.a << "+" << total.b << "i" << endl;
}

void ex536(ComplexNumber c1, ComplexNumber c2){
    ComplexNumber theDifference;
    theDifference.a = c1.a - c2.a;
    theDifference.b = c1.b - c2.b;
    cout << theDifference.a <<"+"<< theDifference.b <<"i" << endl;
}
//(a+bi)(c+di)=(ac-bd)+(ad+bc)i
void ex537(ComplexNumber c1, ComplexNumber c2){
    double productReal, productImag;
    productReal = (c1.a * c2.a - c1.b * c2.b);
    productImag = (c1.a * c2.b + c2.a * c1.b);
    cout << productReal << "+" << productImag << "i";
}

void ex539(ComplexNumber c1, ComplexNumber c2){
    double quotientReal, quotientImag;
    quotientReal = (c1.a * c2.a + c1.b * c2.b) / (c1.a * c1.a + c1.b * c1.b);
    quotientImag = (c1.a*c2.b-c1.b*c2.a)/(c1.a * c1.a + c1.b * c1.b);
    cout << quotientReal << "+" << quotientImag << "i" << endl;
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
//A(x,y) B(a,b)
//AB = căn[(a-x)^2 + (b-y)^2]

void ex543(Coordinate co1, Coordinate co2){
    ex477input(co1);
    ex477input(co2);
    double difference = sqrt((co2.x-co1.x)*(co2.x-co1.x)+ (co2.y-co1.y)*(co2.y-co1.y));
    cout << difference << endl;
}

void ex544(Coordinate co1, Coordinate co2){
    ex477input(co1);
    ex477input(co2);
    double differenceOx = abs(co2.x - co1.x);
    cout << differenceOx << endl;
}

void ex545(Coordinate co1, Coordinate co2){
    ex477input(co1);
    ex477input(co2);
    double differenceOy = abs(co2.y- co1.y);
    cout << differenceOy << endl;
}

void ex546(Coordinate co){
    ex477input(co);
    cout << co.nameOfPoint << "(" << -1*co.x << "," << -1*co.y << ")";
}

void ex547(Coordinate co){
    ex477input(co);
    cout << co.nameOfPoint << "(" << co.x << "," << -1*co.y << ")";
}

void ex548(Coordinate co){
    ex477input(co);
    cout << co.nameOfPoint << "(" << -1*co.x << "," << co.y << ")";
}

struct Point{
    int x, y;
    char name;

    void input() {
        cin >> name >> x >> y;
    }
    void output() {
        printf("%c(%d, %d)", name, x, y);
    }
};

Coordinate findSymmetricPoint(const Coordinate& p) {
    Coordinate symmetricPoint;
    symmetricPoint.x = p.y; 
    symmetricPoint.y = p.x;
    return symmetricPoint;
}

Coordinate findSymmetricPointReverse(const Coordinate& p) {
    Coordinate symmetricPoint;
    symmetricPoint.x = -1*p.y; 
    symmetricPoint.y = -1*p.x;
    return symmetricPoint;
}

void ex549(Coordinate co){
    ex477input(co);
    Coordinate symmetricPoint = findSymmetricPoint(co);
}

void ex550(Coordinate co){
    ex477input(co);
    Coordinate symmetricPoint = findSymmetricPointReverse(co);
}


void ex551(Coordinate co){
    ex477input(co);
    if(co.x>0&&co.y>0){
        cout << "I";
    }else{
        cout << "NO";
    }
}

void ex552(Coordinate co){
    ex477input(co);
    if(co.y>0&&co.x<0){
        cout << "II";
    }else{
        cout << "NO";
    }
}

void ex553(Coordinate co){
    ex477input(co);
    if(co.y<0&&co.x<0){
        cout << "III";
    }else{
        cout << "NO";
    }
}

void ex554(Coordinate co){
    ex477input(co);
    if(co.y<0&&co.x>0){
        cout << "IV";
    }else{
        cout << "NO";
    }
}


struct Coordinatexyz{
    double x, y, z;
    string nameOfPoint;
};

struct Globular{
    double x, y, z;
    string nameOfPoint;
    double radius;
};

void ex575(Globular &glo){
    cout << "Enter waypoint x: " << endl;
    cin >> glo.x;
    cout << "Enter waypoint y: " << endl;
    cin >> glo.y;
    cout << "Enter waypoint z: " << endl;
    cin >> glo.z;
    cout << "Enter radius: " << endl;
    cin >> glo.radius;
    cout << "Enter name of point: " << endl;
    cin.ignore();
    getline(cin, glo.nameOfPoint);

}

void ex576(Globular glo){
    cout << glo.nameOfPoint << "(" << glo.x << "," << glo.y << "," << glo.z << ")";
    cout << "R = " << glo.radius;
}

void ex577(Globular glo){
    ex575(glo);
    double areaGlobular = 4 * M_PI * glo.radius * glo.radius;
    cout << areaGlobular << endl;
}

void ex578(Globular glo){
    ex575(glo);
    double volumeGlobular = (4.0/3)*M_PI* glo.radius * glo.radius*glo.radius;
    cout << volumeGlobular << endl;
}

void ex579(Globular ci1, Globular ci2){
    ex575(ci1);
    ex575(ci2);
    double difference = sqrt((ci2.x-ci1.x)*(ci2.x-ci1.x)+ (ci2.y-ci1.y)*(ci2.y-ci1.y)+(ci2.z-ci1.z)*(ci2.z-ci1.z));
    if(difference>(ci1.radius+ci2.radius)){
        cout << "Khong cat nhau" << endl;
    }else if(difference<(ci1.radius+ci2.radius)){
        cout << "Cat nhau" << endl;
    }else{
        cout << "Tiep xuc" << endl;
    }
}

void ex580(Globular ci, Coordinate p){
    ex575(ci);
    ex477input(p);
    double difference = sqrt((p.x-ci.x)*(p.x-ci.x)+ (p.y-ci.y)*(p.y-ci.y));
    if(difference<ci.radius){
        cout << "Nam trong hinh cau";
    }else{
        cout << "Khong nam trong hinh cau";
    }
}

struct Triangle{
    Point A, B, C;
    void input() {
        A.input();
        B.input();
        C.input();
    }
    void output(){
        A.output();
        B.output();
        C.output();
    }
};


int findDistance(Point p1, Point p2){
    int distanceX = p1.x - p2.x;
    int distanceY = p1.y - p2.y;
    return sqrt(distanceX * distanceX + distanceY * distanceY);
}

void ex583(Triangle tri){
    tri.output();
}

void ex584(Triangle tri){
    tri.input();
    int distanceAB = sqrt((tri.B.x - tri.A.x) * (tri.B.x - tri.A.x) + (tri.B.y - tri.A.y) * (tri.B.y - tri.A.y));

    int distanceAC = sqrt((tri.C.x - tri.A.x) * (tri.C.x - tri.A.x) + (tri.C.y - tri.A.y) * (tri.C.y - tri.A.y));

    int distanceBC = sqrt((tri.C.x - tri.B.x) * (tri.C.x - tri.B.x) + (tri.C.y - tri.B.y) * (tri.C.y - tri.B.y));

    if(((distanceAB + distanceAC)>distanceBC)&&(distanceAB < (distanceAC+distanceBC))&&((distanceAB + distanceBC)>distanceAC)){
        cout << "Toa do lap thanh 3 dinh cua mot tam giac" << endl;
    }else{
        cout << "Toa do ko lap thanh 3 dinh cua mot tam giac" << endl;
    }
}

void ex585(Triangle tri){
    tri.input();
    int distanceAB = sqrt((tri.B.x - tri.A.x) * (tri.B.x - tri.A.x) + (tri.B.y - tri.A.y) * (tri.B.y - tri.A.y));

    int distanceAC = sqrt((tri.C.x - tri.A.x) * (tri.C.x - tri.A.x) + (tri.C.y - tri.A.y) * (tri.C.y - tri.A.y));

    int distanceBC = sqrt((tri.C.x - tri.B.x) * (tri.C.x - tri.B.x) + (tri.C.y - tri.B.y) * (tri.C.y - tri.B.y));
    cout << distanceAB + distanceAC + distanceBC;
}

void ex586(Triangle tri){
    tri.input();
    int distanceAB = sqrt((tri.B.x - tri.A.x) * (tri.B.x - tri.A.x) + (tri.B.y - tri.A.y) * (tri.B.y - tri.A.y));

    int distanceAC = sqrt((tri.C.x - tri.A.x) * (tri.C.x - tri.A.x) + (tri.C.y - tri.A.y) * (tri.C.y - tri.A.y));

    int distanceBC = sqrt((tri.C.x - tri.B.x) * (tri.C.x - tri.B.x) + (tri.C.y - tri.B.y) * (tri.C.y - tri.B.y));

    int p = distanceAB + distanceAC + distanceBC;
    cout << sqrt(p * (p - distanceAB) * (p - distanceAC) * (p - distanceBC));
}

void ex587(Triangle tri){
    tri.input();
    int pointX = (tri.A.x + tri.B.x + tri.C.x) / 3;
    int pointY = (tri.A.y + tri.B.y + tri.C.y) / 3;
    cout << "G(" << pointX << ";" << pointY << ")";
}

void ex588(Triangle t) {
    int maxX = max(max(t.A.x, t.B.x), t.C.x);
    cout << maxX << endl;
}

void ex589(Triangle t) {
    int minY = min(min(t.A.y, t.B.y), t.C.y);
    cout << minY << endl;
}

struct TriangleHasP{
    Point P, A, B, C;
    void input() {
        A.input();
        B.input();
        C.input();
    }
    void output(){
        A.output();
        B.output();
        C.output();
    }
};


void ex590(TriangleHasP tri){
    tri.input();
    int distance = findDistance(tri.P, tri.A) + findDistance(tri.P, tri.B) + findDistance(tri.P, tri.C);
    cout << "Total: " << distance << endl;
}

double area(Point A, Point B, Point C) {
    double a = sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
    double b = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
    double c = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

bool isInsideTriangle(Point A, Point B, Point C, Point P) {
    double ABC = area(A, B, C);
    double ABP = area(A, B, P);
    double APC = area(A, P, C);
    double PBC = area(P, B, C);
    return (ABC == ABP + APC + PBC);
}

void ex591(Point A, Point B, Point C, Point P){
    cin >> A.x >> A.y;
    cin >> B.x >> B.y;
    cin >> C.x >> C.y;
    cin >> P.x >> P.y;
    if (isInsideTriangle(A, B, C, P)) {
        cout << "Diem P nam trong tam giac ABC";
    } else {
        cout << "Diem P khong nam trong tam giac ABC";
    }
}

void ex592(Point A, Point B, Point C){
    double a = sqrt(pow(B.x - C.x, 2) + pow(B.y - C.y, 2));
    double b = sqrt(pow(A.x - C.x, 2) + pow(A.y - C.y, 2));
    double c = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));
    if(a+b>c||a+c<b||b+c>a){
        if(a==b&&a==c&&b==c){
            cout << "Tam giac deu";
        }else if(a*a==b*b+c*c||c*c==a*a+b*b==||b*b==a*a+c*c){
            cout << "Tam giac vuong";
            if(a==b||b==c||c==a){
            cout << "Tam giac vuong can";
            }
        }else if(a==b||b==c||c==a){
            cout << "Tam giac can";
        }
    }else{
        cout << "Khong phai tam giac";
    }
}

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

void ex558(Coordinatexyz p1, Coordinatexyz p2){
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2) + pow(p2.z - p1.z, 2));
    cout << distance << endl;
}

void ex559(Coordinatexyz p1, Coordinatexyz p2){
    double differenceOx = abs(p2.x - p1.x);
    cout << differenceOx << endl;
}

void ex560(Coordinatexyz p1, Coordinatexyz p2){
    double differenceOy = abs(p2.y - p1.y);
    cout << differenceOy << endl;
}

void ex561(Coordinatexyz p1, Coordinatexyz p2){
    double differenceOz = abs(p2.z - p1.z);
    cout << differenceOz << endl;
}

void ex562(Coordinatexyz co){
    ex478input(co);
    cout << co.nameOfPoint << "(" << -1*co.x << "," << -1*co.y << "," << -1*co.z << ")";
}

void ex563(Coordinatexyz co){
    ex478input(co);
    cout << co.nameOfPoint << "(" << co.x << "," << co.y << "," << -1*co.z << ")";
}

void ex564(Coordinatexyz co){
    ex478input(co);
    cout << co.nameOfPoint << "(" << co.x << "," << -1*co.y << "," << co.z << ")";
}

void ex565(Coordinatexyz co){
    ex478input(co);
    cout << co.nameOfPoint << "(" << -1*co.x << "," << co.y << "," << co.z << ")";
}


struct Monomial{
    double coefficient;
    char variable;
    double power;
    // friend Monomial operator * (const Monomial mo, const Monomial mono) {
    //     Monomial result;
    //     result.coefficient = (mo.coefficient * mono.coefficient);
    //     result.power = mo.power + mono.power;
    //     return result;
    // }
};


// Monomial operator * (const Monomial mo, const Monomial mono) {
//     Monomial result;
//     result.coefficient = (mo.coefficient / mono.coefficient);
//     result.power = mo.power - mono.power;
// }

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

void ex486output(Monomial mo, Monomial mono){
    cout << mo.coefficient * mono.coefficient << "x^" << mo.power + mono.power << endl;
}

void ex487output(Monomial mo) {
    cout << "Derivative: " << mo.power * mo.coefficient << mo.variable << "^" << mo.power - 1 ;
}

void ex488output(Monomial mo, Monomial mono){
    cout << mo.coefficient / mono.coefficient << "x^" << mo.power - mono.power << endl;
}

void ex489(Monomial &f, int k) {
    for (int i = 0; i < k; i++) {
        f.coefficient *= f.power;
        f.power--;
    }
    cout << f.coefficient << "*" << f.variable << "^" << f.power;
}

void ex490(Monomial mo, int x0){
    int result = mo.coefficient * pow(x0, mo.power);
    cout << result;
}

struct Date{
    int day;
    int month;
    int year;
};

void ex481input(Date &da){
    cout << "Enter day: " << endl;
    cin >> da.day;
    cout << "Enter month: " << endl;
    cin >> da.month;
    cout << "Enter year: " << endl;
    cin >> da.year;
}

void ex481output(Date da){
    cout << "Date" << da.day << "/" << da.month  << "/" << da.year << endl ;
}

void ex596(){
    int year;
    cin >> year;
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        cout << "Leap year" << endl;
    }
    else {
        cout << "Not leap year"
    }
}

int getDate(int month, int year){
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        return 31;
        case 4:
        case 6:
        case 9:
        case 11:
        return 30;
        case 2:
            if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            return 29;
            }
            else {
            return 28;
            }
    }
}

int getDayPerYear(int year) {
    if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
        return 366;
    }
    else {
        return 365;
    }
}

void ex597(){
    Date date;
    ex481input(date);
    int total = 0;
    for(int i = 1; i < date.month ; i++) {
        total += getDate(i, date.year);
    }
    total += date.day;
}

void ex598(){
    Date date;
    ex481input(date);
    int total = 0;
    for(int i = 1; i < date.year; i++) {
        total += getDayPerYear(i);
    }
    for(int i = 1; i < date.month; i++) {
        total += getDate(i, date.year);
    }
    total += date.day;
}

void ex599(){
    int year;
    int id;
    cin >> id >> year;
    int month = 1;
    while(id > getDate(month)) {
        id -= getDate(month++);
    }
    cout << id << endl;
}

void ex600(){
    int id;
    cin >> id;
    int year = 1;
    int month = 1;
    while(id>getDayPerYear(year)){
        id -= getDayPerYear(year);
        year++;
    }
    while(id>getDate(month)){
        id -= getDate(month);
        month++;
    }
    cout << id << endl;
}

void ex601(){
    Date date;
    ex481input(date);
    date.day++;
    if(date.day>getDate(date.month, date.year)){
        date.month++;
        date.day = 1;
        if(date.month>12){
            date.year++;
            date.month = 1;
        }
    }
    cout << date.day;
}

void ex603(){
    Date date;
    ex481input(date);
    int k;
    cin >> k;
    date.day+=k;
    while(date.day > getDate(date.month, date.year
    )){
        if(date.day>getDate(date.month, date.year)){
            date.day -= getDate(date.month, date.year);
            date.month++;
            if(date.month>12){
                date.year++;
                date.month = 1;
            }
        }
    }
    cout << date.day;
}

void ex604(){
    Date date;
    ex481input(date);
    int k;
    cin >> k;
    date.day -= k;
    while(date.day > getDate(date.month, date.year
    )){
        if(date.day>getDate(date.month, date.year)){
            date.day -= getDate(date.month, date.year);
            date.month--;
            if(date.month<1){
                date.year--;
                date.month = 12;
            }
        }
    }
    cout << date.day;
}


void ex602(){
    Date date;
    ex481input(date);
    date.day--;
    if(date.day<1){
        date.month--;
        date.day = getDate(date.month, date.year);
        if(date.month<1){
            date.year--;
            date.month = 12;
        }
    }
    cout << date.day;
}

void ex605(Date date1, Date date2){
    int day1 = ex597(date1);
    int day2 = ex597(date2);
   
    int difference = abs(day2 - day1);
    cout << difference << endl;
}

void ex606(Date date1, Date date2){
    int day1 = ex597(date1);
    int day2 = ex597(date2);
    
    if(day2 > day1){
        cout << "Ngay 2 lon hon ngay 1";
    }else if(day2<day1){
        cout << "Ngay 2 nho hon ngay 1";
    }else{
        cout << "Ngay 2 bang ngay 1"
    }
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

struct Line{
    int a;
    int b;
    int c;
};

void ex482input(Line &li){
    cout << "Enter coeffient a: " << endl;
    cin >> li.a;
    cout << "Enter coeffient b: " << endl;
    cin >> li.b;
    cout << "Enter coeffient c: " << endl;
    cin >> li.c;
}

void ex482output(Line li){
    cout << li.a << "x + " << li.b << "y + " << li.c << " = 0" << endl;
}

struct Circle {
    double x;
    double y;
    double radius;
};

void ex483input(Circle &ci){
    cout << "Enter waypoint x: ";
    cin >> ci.x;
    cout << "Enter waypoint y: ";
    cin >> ci.y;
    cout << "Enter radius: ";
    cin >> ci.radius;
}

void ex483output(Circle ci){
    cout << "Circle: I(" << ci.x << ", " << ci.y << "), R: " << ci.radius << endl;
}

void ex484S(Circle &ci){
    double S= M_PI * ci.radius * ci.radius;
}

void ex484P(Circle &ci){
    double P = 2 * M_PI *ci.radius;
}

void ex571(Circle ci1, Circle ci2){
    ex483input(ci1);
    ex483input(ci2);
    double difference = sqrt((ci2.x-ci1.x)*(ci2.x-ci1.x)+ (ci2.y-ci1.y)*(ci2.y-ci1.y));
    if(difference>(ci1.radius+ci2.radius)){
        cout << "Khong cat nhau" << endl;
    }else if(difference<(ci1.radius+ci2.radius)){
        cout << "Cat nhau" << endl;
    }else{
        cout << "Tiep xuc" << endl;
    }
}

void ex572(Circle ci, Coordinate p){
    ex483input(ci);
    ex477input(p);
    double difference = sqrt((p.x-ci.x)*(p.x-ci.x)+ (p.y-ci.y)*(p.y-ci.y));
    if(difference<ci.radius){
        cout << "Nam trong duong tron";
    }else{
        cout << "Khong nam trong duong tron";
    }
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

struct TINH {
    int id;
    string name;
    int population;
    double area;

    void input() {
        cout << "Enter id: " << endl;
        cin >> id;
        cin.ignore();
        cout << "Enter name of city: " << endl;
        getline(cin, name);
        cout << "Enter population: " << endl;
        cin >> population;
        cout << "Enter area: " << endl;
        cin >> area;
    }

    void output() {
        cout << id << " " << name << " "<< population << " " << area << endl;
    }
};

struct HOPSUA{
    string branch;
    double weight;
    Date date;

    void input(){
        getline(cin, branch);
        cin >> weight;
        ex481input(date);
    }
    
    void output(){
        cout << branch << " " << weight << " ";
        ex481output(date);
    }
};
struct Time{
    int hour;
    int minute;
    int second;

    void input(){
        cin >> hour;
        cin >> minute;
        cin >> second;
    }

    void output(){
        cout << hour;
        cout << minute;
        cout << second;
    }

};
struct VE{
    string name;
    int price;
    Time time;
    
    void input(){
        getline(cin, name);
        cin >> price;
        time.input();
    }

    void output(){
        cout << name << " " << price << endl;
        time.output();
    }
};

struct MATHANG{
    string name;
    int simple;
    int amount;

    void input(){
        getline(cin, name);
        cin >> simple;
        cin >> amount;
    }

    void output(){
        cout << name << " " << simple << " " << amount;
    }
};

struct CHUYENBAY{
    int id;
    Date date;
    int hour;
    string placeIn;
    string placeOut;

    void input(){
        cin >> id;
        ex481input(date);
        cin >> hour;
        cin.ignore();
        getline(cin, placeIn);
        getline(cin, placeOut);   
    }

    void output(){
        cout << id;
        ex481output(date);
        cout << hour << placeIn << placeOut << endl;
    }
};

struct CAUTHU{
    int id;
    string name;
    Date date;

    void input(){
        cin >> id;
        cin.ignore();
        getline(cin, name);
        ex481input(date);
    }

    void output(){
        cout << id << " " << name;
        ex481output(date);
    }
};

struct DOIBONG{
    int id;
    string nameOfTeam;
    string nameOfPlayer[30];

    void input(){
        cin >> id;
        cin.ignore();
        getline(cin, nameOfTeam);
        for (int i = 0; i < 30; i++){
            getline(cin, nameOfPlayer[i]);
        }
    }

    void output(){
        cout << id << nameOfTeam;
        for (int i = 0; i < 30; i++){
            cout << nameOfPlayer[i] << " ";
        }
    }
};

struct NHANVIEN{
    int id;
    string name;
    double salary;

    void input(){
        cin >> id;
        cin.ignore();
        getline(cin, name);
        cin >> salary;
    }

    void output(){
        cout << id <<" "<< name << " " << salary << endl;
    }
};

struct THISINH{
    int id;
    double Maths;
    double Physics;
    double Chemistry;
    double total;

    void input(){
        cin >> id;
        cin >> Maths >> Physics >> Chemistry >> total;
    }

    void output(){
        cout << id << " " << Maths << " " << Physics << " " << Chemistry << " " << total << endl;
    }
};

struct LUANVAN{
    int id;
    string nameOfLiterature;
    string nameOfStudent;
    string nameOfTeacher;
    int year;

    void input(){
        cin >> id;
        cin.ignore();
        getline(cin, nameOfLiterature);
        getline(cin, nameOfStudent);
        getline(cin, nameOfTeacher);
    }

    void output(){
        cout << id << " " << nameOfLiterature << " " << nameOfStudent << " " << nameOfTeacher << " " << year << endl;
    }
};

struct HOCSINH{
    string name;
    int Maths;
    int Literature;
    int average = (Maths + Literature) / 2;

    void input(){
        cin >> Maths >> Literature >> average;
    }

    void output(){
        cout << Maths << " " << Literature << " " << average;
    }
};

struct  LOPHOC{
    string nameOfClass;
    int id;
    string nameOfStudent[50];

    void inout(){
        cin >> id;
        cin.ignore();
        getline(cin, nameOfClass);
        for (int i = 0; i < 50; i++){
            getline(cin, nameOfStudent[i]);
        }
    }

    void output(){
        cout << id << " " << nameOfClass;
        for(int i = 0; i < 50; i++) {
            cout << nameOfStudent[i] << " ";
        }
    }
};

struct SOTIETKIEM{
    int id;
    string typeOfSave;
    string nameOfCustomer;
    int CMND;
    Date date;
    double givenMoney;

    void input(){
        cin >> id;
        cin >> CMND;
        cin >> givenMoney;
        cin.ignore();
        getline(cin, typeOfSave);
        getline(cin, nameOfCustomer);
        ex481input(date);
    }

    void output(){
        cout << id << " " << CMND << " " << givenMoney << " " << typeOfSave << " " << nameOfCustomer << " ";
        ex481output(date);
    }

};

struct DAILY{
    int id;
    string name;
    int phone;
    Date date;
    string address;
    string email;

    void input(){
        cin >> id >> phone;
        cin.ignore();
        getline(cin, name);
        getline(cin, address);
        getline(cin, email);
        ex481input(date);
    }

    void output(){
        cout << id << " " << phone << " " << name << " " << address << " " << email << " ";
        ex481output(date);
    }
};

void ex621(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void ex622(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}


void ex623(){
    int n;
    cin >> n;
    Point a[100];
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(a[i].x>0){
            count++;
        }
    }
    cout << count;
}

void ex624(int a[], int n) {
    int count = 0;
    bool check = true;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if (i != j && a[i] == a[j]) {
                check = false;
                break;
            }
        }
        if (check) {
            count++;
        }
    }
    cout << count;
}

void ex625(Point a[], int n){
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }
    Point maxPoint = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i].y>maxPoint.y){
            maxPoint = a[i];
        }
    }

    for(int i = 1; i < n; i++) {
        cout << a[i];
    }
}
 
void ex626(Point a[], int n){
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    Point nearPoint = a[0];
    int minDistance = pow(a[0].x, 2) + pow(a[0].y, 2);

    for(int i = 1; i < n; i++) {
        int distance = pow(a[i].x, 2) + pow(a[i].y, 2);
        if(distance < minDistance){
            minDistance = distance;
            nearPoint = a[i];
        }
    }

    for(int i = 1; i < n; i++) {
        cout << a[i];
    }
}

void ex627(Point a[], int n){
    for(int i = 1; i < n; i++) {
        cin >> a[i];
    }

    Point longPoint = a[INT_MIN];
    int maxDistance = pow(a[0].x, 2) + pow(a[0].y, 2);

    for(int i = 1; i < n; i++) {
        int distance = pow(a[i].x, 2) + pow(a[i].y, 2);
        if(distance > maxDistance){
            maxDistance = distance;
            longPoint = a[i];
        }
    }

    for(int i = 1; i < n; i++) {
        cout << a[i];
    }
}

int findDistance(Point p1, Point p2){
    int distanceX = p1.x - p2.x;
    int distanceY = p1.y - p2.y;
    return sqrt(distanceX * distanceX + distanceY * distanceY);
}

void ex628(Point a[], int n){
    int minDistance = INT_MAX;
    Point nearPoint1, nearPoint2;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int d = findDistance(a[i], a[j];)
            if(d<minDistance){
                minDistance = d;
                nearPoint1 = a[i];
                nearPoint2 = a[j];
            }
        }
    }

    cout << "Point is the nearest: (" << nearPoint1.x << "," << nearPoint1.y << ") and (" << nearPoint2.x << "," << nearPoint2.y << ")";
}

void ex629(Point a[], int n){
    int maxDistance = INT_MIN;
    Point longPoint1, longPoint2;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            int d = findDistance(a[i], a[j];)
            if(d>maxDistance){
                maxDistance = d;
                longPoint1 = a[i];
                longPoint2 = a[j];
            }
        }
    }

    cout << "Point is the longest: (" << longPoint1.x << "," << longPoint1.y << ") and (" << longPoint2.x << "," << longPoint2.y << ")";
}

void ex632(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void ex633(){
    int n;
    cin >> n;
    int a[100];
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void ex634(Fraction f[], int n){
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(f[i].numerator>0&&f[i].denominator>0){
            count++;
        }
    }
    cout << count << endl;
}

void ex635(Fraction f[], int n){
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(f[i].numerator<0&&f[i].denominator<0){
            count++;
        }
    }
    cout << count << endl;
}

bool compareFractionMax(Fraction f1, Fraction f2){
    return f1.numerator * f2.denominator > f2.numerator * f1.denominator;
}

bool compareFractionMin(Fraction f1, Fraction f2){
    return f1.numerator * f2.denominator < f2.numerator * f1.denominator;
}

void ex636(Fraction f[], int n){
    for(int i = 0; i < n; i++) {
        cin >> f[i].numerator >> f[i].denominator;
        int findGCD = gcd(f[i].numerator, f[i].denominator);
        f[i].numerator /= findGCD;
        f[i].denominator /= findGCD;
        sort(f, f + n, compareFractionMax);
    }
    cout << f[0].numerator << "/" << f[0].denominator << endl;
}

void ex637(Fraction f[], int n){
    for(int i = 0; i < n; i++) {
        cin >> f[i].numerator >> f[i].denominator;
        int findGCD = gcd(f[i].numerator, f[i].denominator);
        f[i].numerator /= findGCD;
        f[i].denominator /= findGCD;
        sort(f, f + n, compareFractionMin);
    }
    cout << f[0].numerator << "/" << f[0].denominator << endl;
}

int main()
{
    // het 647
    // TINH ti;
    // ti.input();
    // ti.output();
    // Circle ci;
    // ex483input(ci);
    // ex483output(ci);
    // ex484S(ci);
    // ex484P(ci);

    // Line li;
    // ex482input(li);
    // ex482output(li);
    // Date da;
    // ex481input(da);
    // ex481output(da);
    // ex485();
    // ex480();
    // Monomial mo;
    // Monomial mono;
    // ex479input(mo);
    // ex479input(mono);
    // ex479output(mo);
    // ex486output(mo, mono);
    // ex487output(mo);
    // ex488output(mo, mono);
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