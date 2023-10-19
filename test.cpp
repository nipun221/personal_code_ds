#include<bits/stdc++.h>
using namespace std;

// reverse an integer
int reverse(int x){
    int ans = 0;
    while(x != 0){
        int digit = x%10;

        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){ return 0; }

        ans = (ans*10)+digit; x = x/10;
    }
    return ans;
}

// Used in tenTo2 function
int powerOf10(int a){
    int result = 1;
    for(int i=1; i<=a; i++){
        result = result * 10;
    }
    return result;
}

// used in twoTo10
int powerOf2(int a){
    int result = 1;
    for(int i=1; i<=a; i++){
        result = result * 2;
    }
    return result;
}

int twoTo10(int x){
    int ans = 0;
    int i = 0;
    while(x != 0){
        int bit = x % 10;
        if (bit == 1){
            ans = powerOf2(i) + ans;
        }
        x = x / 10;
        i++;
    }
    return ans;
}

int tenTo2(int x){
    int ans = 0;
    int i = 0;
    while(x != 0){
        int bit = x & 1;
        ans = (bit * powerOf10(i)) + ans;
        x = x >> 1;
        i++;
    }
    return ans;
}

int primeCheck(int n){
    if (n <= 1){
        cout<<n<<" is not prime"<<endl;    
    } else if (n <= 3){
        cout<<n<<" is prime"<<endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i < n; i++){
            if(n%i == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            cout<<n<<" is prime"<<endl;
        } else {
            cout<<n<<" is not prime"<<endl;
        }
    }
    return 0;
}

int SumOfN(int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum = sum + i;
    }
    cout<<"Sum of "<<n<<" numbers is "<<sum<<endl;
    return 0;
}

int fibonacci(int n){
    if (n >= 2){
        int a = 0;
        int b = 1;
        cout<<a<<endl; cout<<b<<endl;
        for(int i=2; i<n; i++){
            int num = a + b;
            cout<<num<<endl;
            int temp1 = num;
            int temp2 = b;
            b = temp1;
            a = temp2;

        }
    } else {
        cout<<"Please enter a valid number!"<<endl;
    }
}

int fibonacci2(int n){
    if (n >= 2){
        int a = 0;
        int b = 1;
        int num = 0;
        for(int i=2; i<=n; i++){
            num = a + b;
            int temp1 = num;
            int temp2 = b;
            b = temp1;
            a = temp2;

        }
        cout<<num<<endl;
    } else {
        cout<<"Please enter a valid number!"<<endl;
    }
}

int ProductAndSum(int x){
    int add = 0;
    int product = 1;
    while(x != 0){
        int digit = x%10;
        add = add + digit;
        product *= digit;
        x = x/10;
    }
    cout<<add<<endl;
    cout<<product<<endl;
}

int numberOfOnes(int n){
    int ans = 0;
    while(n!=0){
        ans = ans + (n&1);
        n = n >> 1;
    }
    cout<<"number of ones = "<<ans<<endl;
}

int complement(int n){
    int m = n;
    int mask = 0;
    if(n == 0){
        return 1;
    }
    while(m != 0){
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = mask & (~n);
    return ans;
}

int main(){
    int n = 1;
    int i = 0;
    bool isBool = false;
    while(i<=31){
        if((n/pow(2,i)) == 1){
            isBool = true;
        }
        i++;
    }
    return isBool;
}

/*
void reverseString(vector<char>& s) {
    int l = s.size();
    for (int i=0; i<(l/2); i++){
        swap(s[i],s[l-i-1]);
    }
}

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
    int l = s.size();
    for (char c:s){
        cout<<c;
    }
    cout<<endl;
    cout << l;
}

olleh
5
*/

/*
int reverse(int x){
    int ans = 0;
    while(x != 0){
        int digit = x%10;

        if((ans>INT_MAX/10) || (ans<INT_MIN/10)){ return 0; }

        else { ans = (ans*10)+digit; x = x/10; }
    }
    return ans;
}

int main(){
   int a = reverse(546);
   cout<<a;
}

645
*/

/*
class Solution {
public:
    int bitwiseComplement(int n) {
      int i = 0;
      int ans = 0;
      while(n != 0){
        int bit = (n&1);
        int rev = bit^1;
        ans = (rev * pow(10,i)) + ans;
        n = n >> 1;
        i++;
      }
      int sol = ans;
      int ans2 = 0;
      int j = 0;
      while(sol != 0){
        int dig = sol%10;
        if(dig == 1){
          ans2 = pow(2,j) + ans2;
        }
        sol = sol / 10;
        j++;
      }
      return ans2;
    }
};

This is a wrong code(with issues)
*/