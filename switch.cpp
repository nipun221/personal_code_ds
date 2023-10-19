#include<bits/stdc++.h>
using namespace std;

int calculator(char op, int num1, int num2){
    cout<<"Output => ";

    switch (op) {
    case '+':
        cout<<num1<<" + "<<num2<<" = "<<(num1+num2)<<endl;
        break;
    case '-':
        cout<<num1<<" - "<<num2<<" = "<<(num1-num2)<<endl;
        break;
    case '*':
        cout<<num1<<" * "<<num2<<" = "<<(num1*num2)<<endl;
        break;
    case '/':
        cout<<num1<<" / "<<num2<<" = "<<(num1/num2)<<endl;
        break;
    default:
        cout<<"use operand\n 1. + for addition\n2. - for subtraction\n3. * for multiplication\n4. / for division"<<endl;
        break;
    }
}

int clumsyFactorial(int n){
    if(n == 1 | n == 2){
        return n;
    } 
    else if(n == 3 | n==4){
        return n+3;
    }
    else if (n%4 == 0){
        return (n+1);
    } 
    else if(n%4 == 2 | n%4 == 1){
        return (n+2);
    } 
    else if(n%4 == 3){
        return (n-1);
    } 
    else {
        return 0;
    }
}

long long factorial(int n){
    if (n==0 or n==1){
        return 1;
    } 
    return (n * factorial(n-1));
}

long long ncr(int n, int r){
    return ( factorial(n) / ((factorial(r)*factorial(n-r))) );
}

int main() {
    long long a = ncr(20, 5);
    cout<<a;
}



// int n = 10 * 9 / 8 + 7 - 6 * 5 / 4 + 3 - 2 * 1;  //reminder 2 - (i+2)
// int a = 12* 11/ 10+ 9- 8* 7/ 6+ 5- 4* 3/ 2+ 1; //reminder 0 - (i+1)
// int b = 9* 8/ 7+ 6- 5* 4/ 3+ 2- 1; //reminder 1  - (i+2)
// int c = 11* 10/ 9+ 8- 7* 6 /5+ 4- 3* 2/ 1;  //reminder 3 - (i-1)
// cout<<n<<endl; cout<<a<<endl; cout<<b<<endl; cout<<c<<endl;
//       12            13             11             10