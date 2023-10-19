#include<bits/stdc++.h>
using namespace std;

int main() {
    int n = 5;
    for(int row=1; row<=n; row++){
        int num = n - row + 1;
        int a = 1;
        for(num; num--;){
            cout<<a;
            a++;
        }
        int b = (2*row)-2;
        for(int col=1; col<=b; col++){
            cout<<"*";
        }
        int num2 = n - row + 1;
        int c = num2;
        for(num2; num2--;){
            cout<<c;
            c--;
        }
        cout<<endl;
    }
}

/*
int a=3;
for (int i=0;i<a;i++){
    for (int j=0;j<a;j++){
        cout << '*';
    }
    cout<<endl;
}
***
***
***
*/

/*
int a=3;
for (int i=1;i<=a;i++){
    for (int j=1;j<=a;j++){
        cout << i;
    }
    cout<<endl;
}
111
222
333
*/

/*
int a=4;
for (int i=1;i<=a;i++){
    for (int j=1;j<=a;j++){
        cout << j;
    }
    cout<<endl;
}
1234
1234
1234
1234
*/

/*
int a=4;
for (int i=1;i<=a;i++){
    for (int j=a;j>=1;j--){
        cout << j;
    }
    cout<<endl;
}
4321
4321
4321
4321
*/

/*
int a=4;
int count = 0;
for (int i=1;i<=a;i++){
    for (int j=1;j<=a;j++){
        count = count + 1;
        cout<<count<<" ";
    }
    cout<<endl;
}
1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16
*/

/*
int a=4;
for (int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
        cout << '*';
    }
    cout<<endl;
}
*
**
***
****
*/

/*
int a=4;
for (int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
        cout << i;
    }
    cout<<endl;
}
1
22
333
4444
*/

/*
int a=4;
int count = 1;
for (int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
        cout << count<<" ";
        count = count + 1;
    }
    cout<<endl;
}
1 
2 3
4 5 6
7 8 9 10
*/

/*
int a=6;
for (int i=1;i<=a;i++){
    int count = i;
    for (int j=1;j<=i;j++){
        cout << count<<" ";
        count = count + 1;
    }
    cout<<endl;
}
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
*/

/*
int a=6;
for (int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
        cout<<(i+j-1)<<" ";
    }
    cout<<endl;
}
1 
2 3
3 4 5
4 5 6 7
5 6 7 8 9
6 7 8 9 10 11
*/

/*
int a=6;
for (int i=1;i<=a;i++){
    int count = i;
    for (int j=1;j<=i;j++){
        cout<<count<<" ";
        count = count - 1;
    }
    cout<<endl;
}
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
*/

/*
int a=6;
for (int i=1;i<=a;i++){
    for (int j=1;j<=i;j++){
        cout<<(i-j+1)<<" ";
    }
    cout<<endl;
}
1 
2 1
3 2 1
4 3 2 1
5 4 3 2 1
6 5 4 3 2 1
*/

/*
int n = 4;
int a = 65;
for (int row=0; row<n; row++){
    for (int col = 0; col<n; col++){
        cout<<char(a+row);
    }
    cout<<endl;
}
AAAA
BBBB
CCCC
DDDD
*/

/*
int n = 4;
int a = 65;
for (int row=0; row<n; row++){
    for (int col = 0; col<n; col++){
        cout<<char(a+col);
    }
    cout<<endl;
}
ABCD
ABCD
ABCD
ABCD
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    for (int col=1; col<=n; col++){
        char ch = 'A'+row+col-2;
        cout << ch;
    }
    cout<<endl;
}
ABCD
BCDE
CDEF
DEFG
*/

/*
int n = 4;
char ch = 'A';
for (int row=1; row<=n; row++){
    char bh = ch + row - 1;
    for (int col=1; col<=n; col++){ 
        cout<<bh;
        bh = bh + 1;
    }
    cout<<endl;
}
ABCD
BCDE
CDEF
DEFG
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    for (int col=1; col<=row; col++){
        char ch = 'A'+row-1; 
        cout<<ch;
    }
    cout<<endl;
}
A
BB
CCC
DDDD
*/

/*
int n = 4;
char ch = 'A';
for (int row=1; row<=n; row++){
    for (int col=1; col<=row; col++){ 
        cout<<ch;
        ch = ch + 1;
    }
    cout<<endl;
}
A
BC
DEF
GHIJ
*/

/*
int n = 4;
char ch = 'A';
for (int row=1; row<=n; row++){
    char bh = ch + row - 1;
    for (int col=1; col<=row; col++){ 
        cout<<bh;
        bh = bh + 1;
    }
    cout<<endl;
}
A
BC
CDE
DEFG
*/

/*
int n = 4;
int row = 1;
while(row<=n){
    int col = 1;
    while(col<=row){
        char ch = 'A' + row + col - 2;
        cout<<ch;
        col++;              //col = col + 1;
    }
    cout<<endl;
    row++;               //row = row + 1;
}
A
BC
CDE
DEFG
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int space = n - row;
    for (space; space--;){ 
        cout<<" ";
    }
    for (int col=1; col<=row; col++){
        cout<<"*";
    }
    cout<<endl;
}
   *
  **
 ***
****
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int star = n - row + 1;
    for (star; star--;){ 
        cout<<"*";
    }
    cout<<endl;
}
****
***
**
*
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int space = row - 1;
    for (int a=1;a<=space;a++){ 
        cout<<" ";
    }
    int star = n - row + 1;
    for(int col=1;col<=star;col++){
        cout<<"*";
    }
    cout<<endl;
}
****
 ***
  **
   *
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int space = row - 1;
    for (int a=1;a<=space;a++){ 
        cout<<" ";
    }
    int star = n - row + 1;
    for(int col=1;col<=star;col++){
        cout<<row;
    }
    cout<<endl;
}
1111
 222
  33
   4
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int space = n - row;
    for (space; space--;){ 
        cout<<" ";
    }
    for(int col=1;col<=row;col++){
        cout<<row;
    }
    cout<<endl;
}
   1
  22
 333
4444
*/

/*
int n = 4;
for (int row=1; row<=n; row++){
    int space = row - 1;
    for (int a=1; a<=space; a++){ 
        cout<<" ";
    }
    int b = row;
    int star = n - row + 1;
    for(int col=1;col<=star;col++){
        cout<<b;
        b = b + 1;
    }
    cout<<endl;
}
1234
 234
  34
   4
*/

/*
int n = 4;
int b = 1;
for (int row=1; row<=n; row++){
    int space = n - row;
    for (space; space--;){ 
        cout<<" ";
    }
    for(int col=1;col<=row;col++){
        cout<<b;
        b = b + 1;
    }
    cout<<endl;
}
   1
  23
 456
78910
*/

/*
int n = 5;
for(int row=1; row<=n; row++){
    int space = n - row;
    for(space; space--;){
        cout<<" ";
    }
    for(int col=1; col<=row; col++){
        cout<<col;
    }
    int b = row;
    for(int i=2; i<=row; i++){
        b = b - 1;
        cout<<b;
    }
    cout<<endl;
}
    1
   121
  12321
 1234321
123454321
*/

/*
int n = 5;
for(int row=1; row<=n; row++){
    int num = n - row + 1;
    int a = 1;
    for(num; num--;){
        cout<<a;
        a++;
    }
    int b = (2*row)-2;
    for(int col=1; col<=b; col++){
        cout<<"*";
    }
    int num2 = n - row + 1;
    int c = num2;
    for(num2; num2--;){
        cout<<c;
        c--;
    }
    cout<<endl;
}
1234554321
1234**4321
123****321
12******21
1********1
*/