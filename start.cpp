#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // int a, b;
    // string x;
    // cin >> a >> b >> x;

    long long a = 123456789; // incorect if int a = 123456789;
    long long b = a * a;
    cout << b << "\n"; // -1757895751
    cout << endl;

    // 17 mod 5 = 2, because 17 = 3*5+2.
    int c;
    c = 17 % 5;
    cout << c;

    // For example, the following
    // code prints the value of x with 9 decimal places : printf("%.9f\n", x);
    double c1 = 9;
    printf("%.9f\n", c1); // 29.000000000
    double x = 0.3 * 3 + 0.1;
    printf("%.20f\n", x); // 0.99999999999999988898

    // For example, the name long long is long, so we can define a shorter name ll:
    typedef long long ll;
    ll a1 = 123456789;
    ll b1 = 987654321;
    cout << a1 * b1 << "\n";

   /*  The command typedef can also be used with more complex types. For example,
    the following code gives the name vi for a vector of integers and the name pi for
    a pair that contains two integers
    
    typedef vector<int> vi;
    typedef pair<int, int> pi; 
    */


}

// The code can be compiled using the following command
// g++ -std=c++11 -O2 -Wall test.cpp -o test

// lines at the beginning of the code make input and output more efficient
// ios::sync_with_stdio(0);
// cin.tie(0);

// faster
//  int a, b;
//  scanf("%d %d", &a, &b);

// int a = 123, b = 456;
// printf("%d %d\n", a, b);

// Sometimes the program should read a whole line from the input, possibly
// containing spaces. This can be accomplished by using the getline function:
// string s;
// getline(cin, s);

// to run .\start.exe
